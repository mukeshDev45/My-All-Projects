// ===== Experiment 6 — DOM Manipulation =====

// Task 1: Color changing functionality
const colorBtn = document.getElementById('colorBtn');
const title = document.getElementById('title');
const colors = ['#dfe6e9', '#fab1a0', '#ffeaa7', '#81ecec', '#74b9ff', '#a29bfe'];
let colorIndex = 0;

colorBtn.addEventListener('click', () => {
  document.body.style.background = colors[colorIndex];
  title.style.color = colors[(colorIndex + 2) % colors.length];
  colorIndex = (colorIndex + 1) % colors.length;
});

// Task 2: Counter functionality
let count = 0;
const counterDisplay = document.getElementById('count');
document.getElementById('increase').onclick = () => {
  count++;
  counterDisplay.textContent = count;
};
document.getElementById('decrease').onclick = () => {
  count--;
  counterDisplay.textContent = count;
};
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
