// Dark mode toggle
const darkModeToggle = document.getElementById("darkModeToggle");

if (localStorage.getItem("darkMode") === "enabled") {
  document.body.classList.add("dark");
}

darkModeToggle.addEventListener("click", () => {
  document.body.classList.toggle("dark");
  localStorage.setItem("darkMode", document.body.classList.contains("dark") ? "enabled" : "disabled");
});

// Smooth fade-in on scroll
const fadeElements = document.querySelectorAll(".fade-in");

function checkFadeIn() {
  const triggerBottom = window.innerHeight * 0.85;
  fadeElements.forEach(el => {
    const elementTop = el.getBoundingClientRect().top;
    if (elementTop < triggerBottom) {
      el.classList.add("show");
    }
  });
}

window.addEventListener("scroll", checkFadeIn);
window.addEventListener("load", checkFadeIn);

// Contact form
document.getElementById("contactForm").addEventListener("submit", function(e) {
  e.preventDefault();
  alert("Thanks! Your message has been sent.");
  this.reset();
});
