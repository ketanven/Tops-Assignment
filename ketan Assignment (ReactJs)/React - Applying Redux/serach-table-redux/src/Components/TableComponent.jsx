import React, { useState } from 'react';
import { useDispatch } from 'react-redux';
import { deleteProduct } from '../Actions/actions';

function TableComponent({ products }) {
  const dispatch = useDispatch();
  const [editIndex, setEditIndex] = useState(null); // State to track the index of the product being edited
  const [editedName, setEditedName] = useState(''); // State to hold the edited name

  const handleDelete = (index) => {
    dispatch(deleteProduct(index));
  };

  const handleEdit = (index) => {
    setEditIndex(index);
    setEditedName(products[index].name); // Set the initial value of editedName to the current product name
  };

  const handleSaveEdit = (index) => {
    
    const updatedProducts = [...products];
    updatedProducts[index].name = editedName;
    
    setEditIndex(null); // Reset edit state
  };

  const handleCancelEdit = () => {
    setEditIndex(null); // Reset edit state
  };

  const handleChange = (e) => {
    setEditedName(e.target.value); // Update editedName state as user types
  };

  return (
    <div className="container border border-black mt-2 p-2 justify-content-center text-center">
      <table className='table table-bordered'>
        <thead>
          <tr>
            <th>Name</th>
            <th>Price</th>
            <th>Category</th>
            <th>Action</th>
          </tr>
        </thead>
        <tbody>
          {products.map((product, index) => (
            <tr key={index}>
              <td>
                {editIndex === index ? (
                  <input
                    type="text"
                    value={editedName}
                    onChange={handleChange}
                  />
                ) : (
                  product.name
                )}
              </td>
              <td>{product.price}</td>
              <td>{product.category}</td>
              <td>
                {editIndex === index ? (
                  <>
                    <button
                      className='btn btn-success mx-2'
                      onClick={() => handleSaveEdit(index)}
                    >
                      Save
                    </button>
                    <button
                      className='btn btn-secondary mx-2'
                      onClick={handleCancelEdit}
                    >
                      Cancel
                    </button>
                  </>
                ) : (
                  <>
                    <button
                      className='btn btn-primary mx-2'
                      onClick={() => handleEdit(index)}
                    >
                      Edit
                    </button>
                    <button
                      className='btn btn-danger mx-2'
                      onClick={() => handleDelete(index)}
                    >
                      Delete
                    </button>
                  </>
                )}
              </td>
            </tr>
          ))}
        </tbody>
      </table>
    </div>
  );
}

export default TableComponent;
