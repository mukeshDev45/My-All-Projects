// Function to display current time
function showTime() {
    const now = new Date();
    document.getElementById("time").textContent = now.toLocaleTimeString();
}

// Update time every second
setInterval(showTime, 1000);
showTime();

// Reload page every 5 seconds
setInterval(function() {
    location.reload();
}, 5000);
