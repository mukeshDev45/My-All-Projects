// Key concepts and plagiarism references
const keyConcepts = ["inheritance", "polymorphism", "encapsulation", "abstraction"];
const plagiarismDatabase = [
    "Object-oriented programming is a paradigm...",
    "Java supports polymorphism through..."
];

// Function to analyze student's answer
function analyzeAnswer() {
    const studentAnswer = document.getElementById("studentAnswer").value;
    const foundConcepts = highlightKeyConcepts(studentAnswer);
    const isPlagiarized = checkPlagiarism(studentAnswer);
    const score = autoGrade(foundConcepts.length);
    const feedback = generateFeedback(score);

    // Display results
    document.getElementById("keyConcepts").innerHTML = "Key Concepts Found: " + foundConcepts.join(", ");
    document.getElementById("plagiarismStatus").innerHTML = "Plagiarism: " + (isPlagiarized ? "Detected" : "Not Found");
    document.getElementById("score").innerHTML = "Score: " + score;
    document.getElementById("feedback").innerHTML = "Feedback: " + feedback;
}

// Function to highlight key concepts
function highlightKeyConcepts(answer) {
    const found = [];
    keyConcepts.forEach(concept => {
        if (answer.toLowerCase().includes(concept)) {
            found.push(concept);
        }
    });
    return found;
}

// Function to check plagiarism
function checkPlagiarism(answer) {
    return plagiarismDatabase.some(reference => answer.includes(reference));
}

// Function to auto-grade based on the number of concepts found
function autoGrade(conceptCount) {
    if (conceptCount >= 3) return 10;
    else if (conceptCount === 2) return 7;
    else if (conceptCount === 1) return 5;
    return 3;
}

// Function to generate feedback based on the score
function generateFeedback(score) {
    if (score === 10) return "Excellent work!";
    if (score === 7) return "Good effort, but could be better.";
    if (score === 5) return "Needs improvement.";
    return "Review the key concepts.";
}