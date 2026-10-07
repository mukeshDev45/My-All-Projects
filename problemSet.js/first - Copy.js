/* Ouestion practice 1
let gameNum = 25;


let userNum = prompt("Guess the game number");

while(userNum != gameNum) { //game

    userNum = prompt("you entered wrong number. Guess again :");
}

console.log("congretulations, you entered the right number");
*/


// Question Practice 2
// For a given with marks of students -> [85, 97, 44, 37, 76, 60]
// Find the average marks of the entire class.

/*
let marks = [85, 97, 44, 37, 76, 60];

let sum = 0;

for(let val of marks) {
    sum  += val;
}
let avg = sum/marks.length;
console.log(`avg marks of the class = ${avg}`);
*/

// Question Practice 3
// For a given array with prices of 5 items -> [250, 645, 300, 900, 50] 
// All items have an offer of 10% OFF on them. Change the array to store final price after applying offer.


/*
let items = [250, 645, 300, 900, 50];

let i = 0;
for(let val of items) {
    let offer = val/10;
    items[i] = items[i]-offer;
console.log(`value after offer = ${items[i]}`);
i++;
}
*/

/*
let items = [250, 645, 300, 900, 50];

for(let i = 0; i < items.length; i++) {
    let offer = items[i] / 10;
    items[i] -=  offer;
    
}

console.log(items);
*/