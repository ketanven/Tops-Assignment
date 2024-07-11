const initialState = {
  products: [
    { name: 'Amanda Waller Shirt Men', price: 333, category: 'Fashion' },
    { name: 'Abercrombie Allen Brook Shirt', price: 70, category: 'Fashion' },
    { name: 'Abercrombie Lake Arnold Shirt', price: 60, category: 'Fashion' },
    { name: 'Bench Shirt', price: 31, category: 'Fashion' },
    { name: 'Shirt', price: 32, category: 'Fashion' },
    { name: 'T Shirt', price: 33, category: 'Fashion' },
    { name: 'Allen ', price: 34, category: 'Fashion' },
    { name: 'Waller ', price: 35, category: 'Fashion' },
  ],
};

const rootReducer = (state = initialState, action) => {
  switch (action.type) {
    case 'SET_PRODUCTS':
      return { ...state, products: action.payload };
    case 'DELETE_PRODUCT':
      const updatedProducts = state.products.filter((product, index) => index !== action.payload);
      return { ...state, products: updatedProducts };
    default:
      return state;
  }
};

export default rootReducer;
