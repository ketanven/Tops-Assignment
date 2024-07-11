import { createAsyncThunk, createSlice } from "@reduxjs/toolkit";
import axios from "axios";

const BASE_URL = "http://localhost:3000/user";
console.log(BASE_URL)

// Thunk to handle login
export const login = createAsyncThunk(
  'user/login',
  async ({ email, password }, { rejectWithValue }) => {
    try {
      const storedUser = localStorage.getItem('currentUser');
      if (storedUser) {
        const parsedUser = JSON.parse(storedUser);
        if (parsedUser.email === email && parsedUser.password === password) {
          return parsedUser;
        }
      }

      const response = await axios.get(BASE_URL);
      const users = response.data;
      const user = users.find(user => user.email === email && user.password === password);

      if (!user) {
        return rejectWithValue('User not found, kindly register first.');
      }

      localStorage.setItem('currentUser', JSON.stringify(user));
      return user;
    } catch (error) {
      console.error('Login API Error:', error);
      return rejectWithValue(error.message);
    }
  }
);


// Thunk to fetch user details
export const showUser = createAsyncThunk(
  "user/showUser",
  async (_, { rejectWithValue }) => {
    try {
      const response = await axios.get(BASE_URL);
      return response.data;
    } catch (error) {
      return rejectWithValue(error.response.data);
    }
  }
);

// Thunk to handle user creation
export const createUser = createAsyncThunk(
  "user/createUser",
  async (data, { rejectWithValue }) => {
    try {
      const response = await axios.post(BASE_URL, data);
      return response.data;
    } catch (error) {
      return rejectWithValue(error.response.data);
    }
  }
);

// Thunk to delete a user
export const deleteUser = createAsyncThunk(
  "user/deleteUser",
  async (id, { rejectWithValue }) => {
    try {
      await axios.delete(`${BASE_URL}/${id}`);
      return { id };
    } catch (error) {
      return rejectWithValue(error.response.data);
    }
  }
);

// Thunk to update a user
export const updateUser = createAsyncThunk(
  "user/updateUser",
  async (data, { rejectWithValue }) => {
    try {
      const response = await axios.put(`${BASE_URL}/${data.id}`, data);
      return response.data;
    } catch (error) {
      return rejectWithValue(error.response.data);
    }
  }
);

const userDetailsSlice = createSlice({
  name: "userDetails",
  initialState: {
    user: [],
    loading: false,
    error: null,
    currentUser: null,
  },
  reducers: {},
  extraReducers: (builder) => {
    builder
      // Fetch user details
      .addCase(showUser.pending, (state) => {
        state.loading = true;
        state.error = null;
      })
      .addCase(showUser.fulfilled, (state, action) => {
        state.loading = false;
        state.user = action.payload;
      })
      .addCase(showUser.rejected, (state, action) => {
        state.loading = false;
        state.error = action.payload;
      })

      // Create new user
      .addCase(createUser.pending, (state) => {
        state.loading = true;
        state.error = null;
      })
      .addCase(createUser.fulfilled, (state, action) => {
        state.loading = false;
        state.user.push(action.payload);
      })
      .addCase(createUser.rejected, (state, action) => {
        state.loading = false;
        state.error = action.payload;
      })

      // Delete user
      .addCase(deleteUser.pending, (state) => {
        state.loading = true;
      })
      .addCase(deleteUser.fulfilled, (state, action) => {
        state.loading = false;
        state.user = state.user.filter((user) => user.id !== action.payload.id);
      })
      .addCase(deleteUser.rejected, (state, action) => {
        state.loading = false;
        state.error = action.payload;
      })

      // Update user
      .addCase(updateUser.pending, (state) => {
        state.loading = true;
      })
      .addCase(updateUser.fulfilled, (state, action) => {
        state.loading = false;
        state.user = state.user.map((user) =>
          user.id === action.payload.id ? action.payload : user
        );
      })
      .addCase(updateUser.rejected, (state, action) => {
        state.loading = false;
        state.error = action.payload;
      })

      // Login user
      .addCase(login.pending, (state) => {
        state.loading = true;
        state.error = null;
      })
      .addCase(login.fulfilled, (state, action) => {
        state.loading = false;
        state.currentUser = action.payload;
      })
      .addCase(login.rejected, (state, action) => {
        state.loading = false;
        state.error = action.payload;
      });
  },
});

export default userDetailsSlice.reducer;
