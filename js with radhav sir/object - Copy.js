//Object is a kind of like map/dictionary where we have "key-value" pairs
var details = ["mukesh", 24, 95.5, false];

let x = {
    name: "mukesh",
    age: 19,
    grade: 95.5,
    isMarried: false
};

// console.log(x.grade);
// x['age'] = 30;
// console.log(x['age']);
// x.age = 40;
// console.log(x.age);

// for in loop
for (const key in x) {
        console.log(key,x[key]);
        
        
    }


