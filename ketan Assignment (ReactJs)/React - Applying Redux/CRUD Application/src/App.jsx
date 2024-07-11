import { BrowserRouter, Route, Routes } from "react-router-dom"
import Home from "./User/Home"
import UserSignup from "./User/UserSignup"
import Login from "./User/Login"
import Admindashboard from "./Admin/Admindashboard"
import EditUser from "./Admin/EditUser"

function App() {

  return (
    <>
    <BrowserRouter>
    
    <Routes>
    <Route path="/" element={<><Home></Home></>}/>
    <Route path="/register" element={<><UserSignup></UserSignup></>}/>
    <Route path="/login" element={<><Login></Login></>}/>
    <Route path="/Adashboard" element={<><Admindashboard></Admindashboard></>}/>
    <Route path="/edituser/:id" element={<><EditUser></EditUser></>}/>




    </Routes>
    </BrowserRouter>
    </>
      
  )
}

export default App
