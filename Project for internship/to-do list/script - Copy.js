const taskInput = document.getElementById("taskInput");
const taskList = document.getElementById("taskList");
const addTaskBtn = document.getElementById("addTaskBtn");
const searchInput = document.getElementById("searchInput");
const darkModeToggle = document.getElementById("darkModeToggle");

// Load saved tasks
document.addEventListener("DOMContentLoaded", () => {
  loadTasks();
  if (localStorage.getItem("darkMode") === "enabled") {
    document.body.classList.add("dark");
  }
});

// Add task
addTaskBtn.addEventListener("click", addTask);

// Search filter
searchInput.addEventListener("keyup", () => {
  const filter = searchInput.value.toLowerCase();
  document.querySelectorAll("#taskList li").forEach(li => {
    const text = li.firstChild.textContent.toLowerCase();
    li.style.display = text.includes(filter) ? "flex" : "none";
  });
});

// Dark mode toggle
darkModeToggle.addEventListener("click", () => {
  document.body.classList.toggle("dark");
  localStorage.setItem("darkMode", document.body.classList.contains("dark") ? "enabled" : "disabled");
});

function addTask() {
  const taskText = taskInput.value.trim();
  if (taskText === "") return;

  const li = createTaskElement(taskText);
  taskList.appendChild(li);
  saveTask(taskText);

  taskInput.value = "";
}

function createTaskElement(taskText, completed = false) {
  const li = document.createElement("li");
  if (completed) li.classList.add("completed");

  li.textContent = taskText;

  // Toggle complete
  li.addEventListener("click", () => {
    li.classList.toggle("completed");
    updateLocalStorage();
  });

  // Delete button
  const delBtn = document.createElement("button");
  delBtn.textContent = "X";
  delBtn.classList.add("delete-btn");
  delBtn.addEventListener("click", (e) => {
    e.stopPropagation();
    li.remove();
    updateLocalStorage();
  });

  li.appendChild(delBtn);
  return li;
}

function saveTask(taskText) {
  const tasks = getTasksFromStorage();
  tasks.push({ text: taskText, completed: false });
  localStorage.setItem("tasks", JSON.stringify(tasks));
}

function getTasksFromStorage() {
  return JSON.parse(localStorage.getItem("tasks")) || [];
}

function loadTasks() {
  const tasks = getTasksFromStorage();
  tasks.forEach(task => {
    const li = createTaskElement(task.text, task.completed);
    taskList.appendChild(li);
  });
}

function updateLocalStorage() {
  const tasks = [];
  taskList.querySelectorAll("li").forEach(li => {
    tasks.push({
      text: li.childNodes[0].textContent,
      completed: li.classList.contains("completed")
    });
  });
  localStorage.setItem("tasks", JSON.stringify(tasks));
}
