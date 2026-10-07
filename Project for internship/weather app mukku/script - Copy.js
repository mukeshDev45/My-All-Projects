const apiKey = "ae66e47d97fb8d19ab2f6f4626daba99"; // Replace with your OpenWeatherMap API key

async function getWeather() {
    let city = document.getElementById("city").value;
    if (!city) {
        alert("Please enter a city name");
        return;
    }

    let url = `https://api.openweathermap.org/data/2.5/weather?q=${city}&appid=${apiKey}&units=metric`;

    try {
        let response = await fetch(url);
        if (!response.ok) {
            throw new Error("City not found");
        }
        let data = await response.json();

        document.getElementById("city-name").innerText = data.name;
        document.getElementById("temp").innerText = `🌡 Temp: ${data.main.temp}°C`;
        document.getElementById("desc").innerText = `☁ Weather: ${data.weather[0].description}`;
    } catch (error) {
        alert(error.message);
    }
}
