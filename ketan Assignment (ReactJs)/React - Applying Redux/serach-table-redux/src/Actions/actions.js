// actions.js

export const setProducts = (products) => ({
  type: 'SET_PRODUCTS',
  payload: products,
});

export const deleteProduct = (index) => ({
  type: 'DELETE_PRODUCT',
  payload: index,
});
