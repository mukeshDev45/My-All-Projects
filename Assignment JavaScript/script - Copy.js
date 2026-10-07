document.addEventListener("DOMContentLoaded", function () {
    // Simulating weather data update
    const cityName = document.getElementById("city-name");
    const temperature = document.getElementById("temperature");
    const weatherDescription = document.getElementById("weather-description");

    // Sample data (can be fetched from an API)
    const weatherData = {
        city: "Los Angeles",
        temp: "30°C",
        description: "Partly Cloudy"
    };

    // Updating the DOM
    cityName.textContent = weatherData.city;
    temperature.textContent = weatherData.temp;
    weatherDescription.textContent = weatherData.description;
});
