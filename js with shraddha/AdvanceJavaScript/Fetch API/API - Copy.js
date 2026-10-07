const URL = "https://catfact.ninja/facts";


const getFacts = async () => {
    console.log("getting data .....");
    
   let response = await fetch(URL);
   console.log(response); // JSON format
   let data = await response.json();
   console.log(data[0].text);
   
};