/*
console.log("Hello World!");
console.log("Mukesh Raja ");
let a = 10;
let b = 15;
let sum = a + b;
console.log(sum);

let pencilPrice = 10;
let erasorPrice = 5;
// let output = "The total price is : " + (pencilPrice + erasorPrice) + " Rupees."
let output = `The total price is : ${pencilPrice + erasorPrice} Rupees.`; // back ticks
console.log(output);
*/

// Arithmetic Operator
let a = 10;
let b = 20;
console.log(a + b);
console.log(a - b);
console.log(a * b);
console.log(a / b);
console.log(a % b);
console.log(a ** b);

// Unary Operator
console.log(a++); // 10
console.log(++a); // 12
console.log(a--);
console.log(--a);

// Comparison Operator
let age = 18;
console.log(age > 18);
console.log(age >= 18);
console.log(age < 18);
console.log(age <= 18);


// Conditional Statement 
let age1 = 18;
if(age1>=18){
    console.log("You are Adult");
} if(age1<18) {
    console.log("You are not adult");
    
}


let age2 = 14;
if(age >= 18){
    console.log("you can vote");
} else if(age2 >=10 && age2 < 18){
    console.log("you are teenager");
} else {
    console.log("you are child");
    
}