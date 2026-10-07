/*
const student = {
    name: "Mukesh",
    RollNumber: 202410101230007,
    course: "B.tech",
    CGPA: 7.7, 
    marks: 100,
};
*/

/*const employee = {
    calTax() {
        console.log("tax rate is 10%");
        
    }
}*/

class ToyotaCar {
    constructor() {
        console.log("creating new object");
        
    }
    start()  {
        console.log("start");
        
    }

    stop() {
        console.log("stop");
        
    }

    setBrand(brand) {
        this.brand = brand;
    }
}
    
let fortuner = new  ToyotaCar();
fortuner.setBrand("fortuner");
let BMW = new ToyotaCar();
BMW.setBrand("BMW");