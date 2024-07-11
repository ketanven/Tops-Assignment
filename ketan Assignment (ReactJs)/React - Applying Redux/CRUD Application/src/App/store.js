import { configureStore } from "@reduxjs/toolkit";
import Userdetails from "../Features/Userdetails";


export default configureStore({
    reducer:{
        user :  Userdetails,
    }
})