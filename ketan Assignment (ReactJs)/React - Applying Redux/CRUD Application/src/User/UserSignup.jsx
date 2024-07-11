import { useState } from "react";
import Userheader from "./Common Components/Userheader";
import { useDispatch } from "react-redux";
import { createUser } from "../Features/Userdetails";
import { toast } from "react-toastify";
import { useNavigate } from "react-router-dom";

function UserSignup() {
  const redirect = useNavigate();

  const [user, setuser] = useState({
    profile: "",
    name: "",
    email: "",
    password: "",
    cpassword: "",
    status: "unblock"
  });

  const dispatch = useDispatch();

  const getChange = (e) => {
    setuser({
      ...user,
      [e.target.name]: e.target.value,
    });
  };

  const handleSubmit = (e) => {
    e.preventDefault();
    dispatch(createUser(user))
      .unwrap()
      .then((registeredUser) => {
        // Store user details in local storage
        localStorage.setItem("currentUser", JSON.stringify(registeredUser));
        
        setuser({
          profile: "",
          name: "",
          email: "",
          password: "",
          cpassword: "",
          status: "unblock"
        });
        toast.success("User registered successfully!");
        redirect("/");
      })
      .catch((err) => {
        console.error("Registration failed:", err);
      });
  };

  return (
    <div>
      <div className="row">
        <Userheader />
        <div className="row">
          <div className="col-12">
            <div
              style={{ position: "relative", top: "120px" }}
              className="section-title"
              data-aos="fade-in"
              data-aos-delay={100}
            >
              <h2>SIGN UP !!</h2>
            </div>
          </div>
        </div>

        <div
          style={{ position: "relative", top: "90px" }}
          className="row pt-5 text-center p-5 mb-5"
        >
          <div className="col-6 offset-4">
            <form
              onSubmit={handleSubmit}
              method="post"
              role="form"
              className="php-email-form"
            >
              <div className="row">
                <div className="col-md-8 form-group mt-md-0">
                  <input
                    type="url"
                    name="profile"
                    onChange={getChange}
                    className="form-control"
                    id="profile"
                    placeholder="Your Profile Pic"
                    required
                  />
                </div>
                <div className="col-md-8 form-group mt-3 pt-4 mt-md-0">
                  <input
                    type="text"
                    name="name"
                    onChange={getChange}
                    className="form-control"
                    id="name"
                    placeholder="Your Name"
                    required
                  />
                </div>
                <div className="col-md-8 form-group mt-3 pt-4 mt-md-0">
                  <input
                    type="email"
                    className="form-control"
                    onChange={getChange}
                    name="email"
                    id="email"
                    placeholder="Your Email"
                    required
                  />
                </div>
                <div className="col-md-8 form-group mt-3 pt-4 mt-md-0">
                  <input
                    type="password"
                    className="form-control"
                    name="password"
                    onChange={getChange}
                    id="password"
                    placeholder="Your Password"
                    required
                  />
                </div>
                <div className="col-md-8 form-group mt-3 pt-4 mt-md-0">
                  <input
                    type="password"
                    className="form-control"
                    name="cpassword"
                    onChange={getChange}
                    id="cpassword"
                    placeholder="Confirm password"
                    required
                  />
                </div>
              </div>
              <div className="col-md-8 form-group mt-3 pt-4 mt-md-0">
                <button className="btn btn-dark w-50" type="submit">
                  Sign Up
                </button>
              </div>
            </form>
          </div>
        </div>
      </div>
    </div>
  );
}

export default UserSignup;
