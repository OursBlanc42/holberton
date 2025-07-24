fetch('https://swapi-api.hbtn.io/api/people/5/?format=json')
// catch brut HTML answer and switch it to Json
  .then(response => response.json())
  // catch the name
  .then(data => {
    const name = data.name;
    const item = document.getElementById('character');
    item.textContent = name;
  });
