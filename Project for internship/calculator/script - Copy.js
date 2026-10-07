// script.js
function appendValue(value) {
    document.getElementById("display").value += value;
}

function clearDisplay() {
    document.getElementById("display").value = "";
}

function deleteLast() {
    let current = document.getElementById("display").value;
    document.getElementById("display").value = current.slice(0, -1);
}

function calculateResult() {
    try {
        let result = eval(document.getElementById("display").value.replace(/÷/g, '/').replace(/×/g, '*'));
        if (result === undefined || result === null) return;
        document.getElementById("display").value = result;
    } catch {
        document.getElementById("display").value = "Error";
    }
}
