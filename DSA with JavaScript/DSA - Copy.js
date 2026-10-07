/*Amount                 Discount
0-5000                  0%
5001-7000               5%
7001-9000               10%
more than 9000          20%*/

// Solution of the above given question
/*
let amount = Number(prompt("what is the final amount ?"));

if(amount > 0 && amount <= 5000){
    console.log(amount);
    
}else if(amount > 5001 && amount <= 7000){
    console.log(amount - Math.floor((5*amount)/100));

}else if(amount > 7001 && amount <= 9000){
    console.log(amount - Math.floor((10*amount)/100));

}else if(amount > 9000){
    console.log(amount - Math.floor((20*amount)/100));

}else{
    console.log("Wrong input");
}
*/

// second method
/*
let amount = Number(prompt("what is the final amount ?"));
let dis = 0;
if(amount > 0 && amount <= 5000){
    dis =0;
}else if(amount > 5000 && amount <= 7000){
    dis=5;
}else if(amount > 7000 && amount <= 9000){
    dis=10;
}else if(amount > 9000){
    dis=20;
}
console.log(amount - Math.floor((dis*amount)/100));
*/

// problem 
/*

unit                   Price
up to 100              Rs.4/unit
101-200                Rs.6/unit
201-400                Rs.8/unit
more than 400          Rs.13/unit
*/

/*
let unit = (prompt("enter electricity unit")); //700
let amount = 0;

if(unit>400){
    amount = (unit-400) * 13; //3900
    unit = 400;
} //400
if(unit>200 && unit<=400){
    amount += (unit-200) * 8; //1600
    unit = 200;
} //200
if(unit>100 && unit<=200){
    amount += (unit-100) * 6; //600
    unit = 100;
} //100
if(unit>0 && unit<=100){
    amount += unit*4; //400
    unit = 0;
}
     console.log(amount);
     */