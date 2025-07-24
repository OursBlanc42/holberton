fetch('https://swapi-api.hbtn.io/api/films/?format=json')
  // Catch the brut HTTP and convert to JSON
  .then(response => response.json())
  // Once we have the data
  .then(data => {
    // Get the <ul> element that will hold the list of movies
    const list = document.getElementById('list_movies');
    // Loop through each movie in array and add to list
    for (let index = 0; index < data.results.length; index++) {
      const newItem = document.createElement('li');
      newItem.textContent = data.results[index].title;
      list.appendChild(newItem);
    }
  });
