// waiting the loading of all the page (script is in header)
document.addEventListener('DOMContentLoaded', function () {
  fetch('https://hellosalut.stefanbohacek.dev/?lang=fr')
  // Catch the brut HTTP and convert to JSON
    .then(response => response.json())
  // Once we have the data
    .then(data => {
      // Get the <ul> element that will hold the list of movies
      const word = data.hello;
      const item = document.getElementById('hello');
      item.textContent = word;
    });
});
