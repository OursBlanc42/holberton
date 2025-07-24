document.getElementById('add_item').onclick = function () {
  const items = document.getElementsByClassName('my_list');
  const item = items[0];
  const newItem = document.createElement('li');
  newItem.textContent = 'Item';
  item.appendChild(newItem);
};
