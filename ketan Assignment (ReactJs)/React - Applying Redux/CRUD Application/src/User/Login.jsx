import { useState, useEffect } from "react";
import { useDispatch, useSelector } from "react-redux";
import { toast } from "react-toastify";
import { useNavigate } from "react-router-dom";
import Userheader from "./Common Components/Userheader";
import { login } from "../Features/Userdetails";

function Login() {
  const [email, setEmail] = useState(""); 
  const [password, setPassword] = useState("");
  const dispatch = useDispatch();
  const navigate = useNavigate();

  const { error, currentUser } = useSelector((state) => state.user);

  const handleLogin = (e) => {
    e.preventDefault();
    dispatch(login({ email, password }))
      .unwrap()
      .then(() => {
        console.log("Login successful!");
        navigate("/"); // Navigate to home or dashboard after login
      })
      .catch((err) => {
        console.error("Login failed:", err);
      });
  };

  useEffect(() => {
    if (error) {
      toast.error(error);
    }
  }, [error]);

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
              <h2>LOGIN !!</h2>
            </div>
          </div>
        </div>

        <div
          style={{ position: "relative", top: "90px" }}
          className="row pt-5 text-center p-5 mb-5"
        >
          <div className="col-6 offset-4">
            <form onSubmit={handleLogin} method="post" role="form" className="php-email-form">
              <div className="row">
                <div className="col-md-8 form-group mt-1 pt-1 mt-md-0">
                  <input
                    type="email"
                    className="form-control"
                    name="email"
                    id="email"
                    placeholder="Your Email"
                    value={email}
                    onChange={(e) => setEmail(e.target.value)}
                    required
                  />
                </div>
                <div className="col-md-8 form-group mt-3 pt-4 mt-md-0">
                  <input
                    type="password"
                    className="form-control"
                    name="password"
                    id="password"
                    placeholder="Your Password"
                    value={password}
                    onChange={(e) => setPassword(e.target.value)}
                    required
                  />
                </div>
              </div>
              <div className="col-md-8 form-group mt-3 pt-4 mt-md-0">
                <button className="btn btn-dark w-50" type="submit">
                  Login
                </button>
              </div>
            </form>
          </div>
        </div>
      </div>
    </div>
  );
}

export default Login;
