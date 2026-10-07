function api() {
    return new Promise((resolve, reject) => {
        setTimeout(() => {
            console.log("weather data");
            resolve(200);
        }, 2000);
    });
} 


async function getWeatherData() {
    await api(1); //1st
    await api(2); // 2nd
}
 
 
 
 
 
 
 
 
 
 
 async function hello() {
    console.log("hello");
    
}