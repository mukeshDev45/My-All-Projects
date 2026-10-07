/*
let promise = new Promise((resolve, reject) => {
    console.log(" I am a promise");
    resolve("success");
});
*/


/*
let promise = new Promise((resolve, reject) => {
    console.log(" I am a promise");
    reject("some error");
});
*/

// const getPromise = () => {
//    return new Promise((resolve, reject) => {
//         console.log("I am a Promise");
//         //resolve("success");
//         reject("network error");
//     });
// };

// let pomise = getPromise();
// promise.then((res) => {
//     console.log("promise fulfilled", res); 
// });

// promise.catch((err) => {
//     console.log("rejected", err); 
// });




function asyncFunc() {
    return new Promise((resolve, reject) => {
       setTimeout(() => {
         console.log("data1");
         resolve("success");
       }, 3000)
    });
}



console.log("fetching data1");
let p1 = asyncFunc();
p1.then(() => {
    console.log(res);
});