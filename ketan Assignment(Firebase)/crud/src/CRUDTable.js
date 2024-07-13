// src/CRUDTable.js
import React, { useState, useEffect } from 'react';
import { collection, addDoc, getDocs, updateDoc, deleteDoc, doc } from 'firebase/firestore';
import { db } from './firebase';

const CRUDTable = () => {
  const [items, setItems] = useState([]);
  const [newItem, setNewItem] = useState({ name: '', value: '' });
  const [editingId, setEditingId] = useState(null);
  const [editingItem, setEditingItem] = useState({ name: '', value: '' });

  useEffect(() => {
    fetchItems();
  }, []);

  const fetchItems = async () => {
    const querySnapshot = await getDocs(collection(db, 'items'));
    setItems(querySnapshot.docs.map(doc => ({ ...doc.data(), id: doc.id })));
  };

  const handleAdd = async () => {
    if (newItem.name && newItem.value) {
      await addDoc(collection(db, 'items'), newItem);
      fetchItems();
      setNewItem({ name: '', value: '' });
    }
  };

  const handleEdit = (item) => {
    setEditingId(item.id);
    setEditingItem({ name: item.name, value: item.value });
  };

  const handleUpdate = async () => {
    const itemDoc = doc(db, 'items', editingId);
    await updateDoc(itemDoc, editingItem);
    fetchItems();
    setEditingId(null);
    setEditingItem({ name: '', value: '' });
  };

  const handleDelete = async (id) => {
    const itemDoc = doc(db, 'items', id);
    await deleteDoc(itemDoc);
    fetchItems();
  };

  return (
    <div className="container mt-5">
      <h2 className="text-center mb-4">CRUD Table</h2>
      <div className="input-group mb-3">
        <input
          type="text"
          className="form-control"
          placeholder="Name"
          value={newItem.name}
          onChange={(e) => setNewItem({ ...newItem, name: e.target.value })}
        />
        <input
          type="text"
          className="form-control"
          placeholder="Value"
          value={newItem.value}
          onChange={(e) => setNewItem({ ...newItem, value: e.target.value })}
        />
        <button className="btn btn-primary" onClick={handleAdd}>Add</button>
      </div>
      <table className="table table-striped table-bordered text-center">
        <thead className="thead-dark">
          <tr>
            <th>Name</th>
            <th>Value</th>
            <th>Actions</th>
          </tr>
        </thead>
        <tbody>
          {items.map((item) => (
            <tr key={item.id}>
              <td>
                {editingId === item.id ? (
                  <input
                    type="text"
                    className="form-control"
                    value={editingItem.name}
                    onChange={(e) => setEditingItem({ ...editingItem, name: e.target.value })}
                  />
                ) : (
                  item.name
                )}
              </td>
              <td>
                {editingId === item.id ? (
                  <input
                    type="text"
                    className="form-control"
                    value={editingItem.value}
                    onChange={(e) => setEditingItem({ ...editingItem, value: e.target.value })}
                  />
                ) : (
                  item.value
                )}
              </td>
              <td>
                {editingId === item.id ? (
                  <>
                    <button className="btn btn-success me-2" onClick={handleUpdate}>Save</button>
                    <button className="btn btn-secondary" onClick={() => setEditingId(null)}>Cancel</button>
                  </>
                ) : (
                  <>
                    <button className="btn btn-warning me-2" onClick={() => handleEdit(item)}>Edit</button>
                    <button className="btn btn-danger" onClick={() => handleDelete(item.id)}>Delete</button>
                  </>
                )}
              </td>
            </tr>
          ))}
        </tbody>
      </table>
    </div>
  );
};

export default CRUDTable;
