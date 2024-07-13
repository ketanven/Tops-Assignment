// Import the functions you need from the SDKs you need
import { initializeApp } from "firebase/app";
import { getAnalytics } from "firebase/analytics";
import { getFirestore } from "firebase/firestore";
// TODO: Add SDKs for Firebase products that you want to use
// https://firebase.google.com/docs/web/setup#available-libraries

// Your web app's Firebase configuration
// For Firebase JS SDK v7.20.0 and later, measurementId is optional
const firebaseConfig = {
  apiKey: "AIzaSyBBRUgpdmFpT62dkInkXKjVUITuLrBEG2E",
  authDomain: "crud-operation-cfa60.firebaseapp.com",
  projectId: "crud-operation-cfa60",
  storageBucket: "crud-operation-cfa60.appspot.com",
  messagingSenderId: "1066806308772",
  appId: "1:1066806308772:web:f4095e1b5248e972671b31",
  measurementId: "G-33BJP3B4XF"
};

const app = initializeApp(firebaseConfig);
const db = getFirestore(app);

export { db };