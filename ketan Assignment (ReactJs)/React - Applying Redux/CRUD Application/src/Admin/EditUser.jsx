import { useEffect, useState } from "react";
import { useDispatch, useSelector } from "react-redux";
import { useNavigate, useParams } from "react-router-dom";
import { updateUser } from "../Features/Userdetails";

function EditUser() {
  const { id } = useParams();

  const dispatch = useDispatch();
  const navigate = useNavigate();

  const alluser = useSelector((state) => state.user.user);

  const [updatedata1, setupdatedata1] = useState();

  const getchang = (e) => {
    setupdatedata1({ ...updatedata1, [e.target.name]: e.target.value });
    console.log(updatedata1);
  };

  useEffect(() => {
    if (id) {
      const singleuser = alluser.filter((ele) => ele.id === id);
      setupdatedata1(singleuser[0]);
    }
  }, []);

  const handleupdate = (e) => {
    e.preventDefault();

    dispatch(updateUser(updatedata1));
    navigate("/Adashboard");
  };
  return (
    <div>
      <div className="row">
        <div className="row">
          <div className="col-12">
            <div
              style={{ position: "relative", top: "120px" }}
              className="section-title"
              data-aos="fade-in"
              data-aos-delay={100}
            >
              <h2>Update Here !!</h2>
            </div>
          </div>
        </div>

        <div
          style={{ position: "relative", top: "90px" }}
          className="row pt-5  text-center p-5 mb-5"
        >
          <div className="col-6 offset-3">
            <form
              onSubmit={handleupdate}
              method="post"
              role="form"
              className="php-email-form"
            >
              <div className="row">
                <div className="col-md-12  mt-md-0">
                  <table border="3" className="table">
                    <tr>
                      <th>Profile Pic</th>
                      <th>
                        <input
                          value={updatedata1 && updatedata1.profile}
                          onChange={getchang}
                          type="url"
                          name="profile"
                          className="form-control"
                          id="profiel"
                          required
                        />
                      </th>
                    </tr>
                    <tr>
                      <th>Name</th>
                      <th>
                        <input
                          value={updatedata1 && updatedata1.name}
                          onChange={getchang}
                          type="text"
                          name="name"
                          className="form-control"
                          id="name"
                          required
                        />
                      </th>
                    </tr>
                    <tr>
                      <th>Email</th>
                      <th>
                        <input
                          value={updatedata1 && updatedata1.email}
                          onChange={getchang}
                          type="email"
                          className="form-control"
                          name="email"
                          id="email"
                          placeholder="Your Email"
                          required
                        />
                      </th>
                    </tr>
                  </table>
                </div>
              </div>
              <div className="col-md-12 form-group mt-3 pt-4 mt-md-0">
                <button className="btn btn-dark w-50" type="submit">
                  Update User
                </button>
              </div>

              
            </form>
          </div>
        </div>
      </div>
    </div>
  );
}

export default EditUser;
