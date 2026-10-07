// Create a variable of type string and try to add a numbers to it.
// chapter 01 --- Q1
let a = "Mukesh";
let b = 45;
console.log(a + b);

// Use typeof operator to find datatype of the string in last question
// Q2
console.log(typeof (a+b));

// create a const object in javascript can you change it to hold a number later
// no can not do it

const a1 = {
    name: "Mukku",
    section : 1,
    isPrincipal: false
}

// try to add a new key to the const object in Problem 3 were you able to do it.
// a1 = 45
a1['friend'] = "Shivam";
a1['friend'] = "Raj";
console.log(a1);


// Write a js program to create a word- meaning dictionary of 5 words.
const dict = {
    appreciate: "recognize the full worth of.",
    ataraxia: "a state of emotional disturbance and anxiety",
    yakka: " work, especially hard work."
}
console.log(dict.yakka);
