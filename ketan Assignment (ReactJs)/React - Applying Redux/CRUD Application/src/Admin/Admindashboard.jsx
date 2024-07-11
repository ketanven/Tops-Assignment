import React, { useEffect, useState } from 'react';
import Adminheader from './Common/Aheader';
import { useDispatch, useSelector } from 'react-redux';
import { deleteUser, showUser } from '../Features/Userdetails';
import { NavLink } from 'react-router-dom';

function Admindashboard() {
    const [selectedUser, setSelectedUser] = useState(null);

    const dispatch = useDispatch();
    const { user } = useSelector((state) => state.user);

    useEffect(() => {
        dispatch(showUser());
    }, [dispatch]);

    const handleViewClick = (user) => {
        setSelectedUser(user);
    };

    return (
        <div>
            <Adminheader />
            <div style={{ position: "relative", top: "200px" }} className="container">
                <div className="row">
                    <div className="col">
                        <table className="table">
                            <thead>
                                <tr>
                                    <th>ID</th>
                                    <th>Name</th>
                                    <th>Profile</th>
                                    <th>Email</th>
                                    <th>Status</th>
                                    <th>Action</th>
                                </tr>
                            </thead>
                            <tbody>
                                {user && user.map((value) => (
                                    <tr key={value.id}>
                                        <td>{value.id}</td>
                                        <td>{value.name}</td>
                                        <td>{value.profile}</td>
                                        <td>{value.email}</td>
                                        <td>{value.status}</td>
                                        <td>
                                            <button 
                                                data-bs-toggle="modal" 
                                                data-bs-target="#myModal" 
                                                className='btn btn-primary m-2 w-100'
                                                onClick={() => handleViewClick(value)}
                                            >
                                                VIEW
                                            </button>
                                            <NavLink to={`/edituser/${value.id}`} className='btn btn-success m-2 w-100'>EDIT</NavLink>
                                            <button onClick={() => dispatch(deleteUser(value.id))} className='btn btn-danger m-2 w-100'>DELETE</button>
                                        </td>
                                    </tr>
                                ))}
                            </tbody>
                        </table>
                    </div>
                </div>

                <div className="modal" id="myModal">
                    <div className="modal-dialog">
                        <div className="modal-content">
                            <div className="modal-header">
                                <h4 className="modal-title">User Details</h4>
                                <button type="button" className="btn-close" data-bs-dismiss="modal"></button>
                            </div>
                            <div className="modal-body">
                                {selectedUser && (
                                    <div>
                                        <p><strong>ID:</strong> {selectedUser.id}</p>
                                        <p><strong>Name:</strong> {selectedUser.name}</p>
                                        <p><strong>Profile:</strong> {selectedUser.profile}</p>
                                        <p><strong>Email:</strong> {selectedUser.email}</p>
                                        <p><strong>Status:</strong> {selectedUser.status}</p>
                                    </div>
                                )}
                            </div>
                            <div className="modal-footer">
                                <button type="button" className="btn btn-danger" data-bs-dismiss="modal">Close</button>
                            </div>
                        </div>
                    </div>
                </div>
            </div>
        </div>
    );
}

export default Admindashboard;
