// Loops

// -> whatsapp, instagram, facebook, ecommerce,youtube, etc;


/*
for(let i=1; i<=10000; i++){
    console.log("hello mukku");
    
}
*/

// 1 - 22
/*
for(Start; end; change){
console.log();

}
*/

    
// sum of n natural numbers
/*let n = Number(prompt("kaha tak add karwaaoe ?"));

if(isNaN(n)) {
    console.log("Invalid input");

}else{
    if(n > 0) {
        let sum = 0;
        for(let i = 1; i<=n; i++){

            sum += i;
        } console.log(sum);
    }
    else{
        console.log("should be +ve and more than 0");
    }
    
}*/

/*
let pr = prompt("kaha tak add karwaaoge ?");

if(pr === null){
    console.log("cancelled");
    
}
else{
    let n = Number(pr);

if(isNaN(n)) {
    console.log("Invalid input");

}else{
    if(n > 0) {
        let fact = 1;
        for(let i = 1; i<=n; i++){

            fact *= i;
        } console.log(fact);
    }
    else{
        console.log("should be +ve and more than 0");
    } 
  }
}
  */


/*let pr = prompt("kaha tak add karwaaoge ?");

if(pr === null){
    console.log("cancelled");
    
}
else{
    let n = Number(pr);

if(isNaN(n)) {
    console.log("Invalid input");

}else{
    if(n > 0) {
        for(let i = 1; i<=Math.floor(n/2); i++){
            if(n%i === 0){
                console.log(i);
                
            }
        }
        } 
    
    else{
        console.log("should be +ve and more than 0");
    } 
  }
}
*/


/*
let pr = prompt("kaha tak add karwaaoge ?");

if(pr === null){
    console.log("cancelled");
    
}
else{
    let n = Number(pr);

if(isNaN(n)) {
    console.log("Invalid input");

}else{
    if(n > 0) {
        let primeHai = true;
        for(let i=2; i<=(n/2); i++){
         if(n%i === 0){
            primeHai = false;
            break;
         }
        }
        console.log(primeHai);
    }else{
        console.log("should be +ve and more than 0");
        

    }            
  }
}
 */
/*let pr = prompt("kaha tak add karwaaoge ?");

if(pr === null){
    console.log("cancelled");
    
}
else{
    let n = Number(pr);

if(isNaN(n)) {
    console.log("Invalid input");

}else{
    if(n > 0){
        console.log(isPrime(n));
        

    }else{
        console.log("should be +ve and more than 0");
        

    }            
  }



function isPrime(n){//12
    if(n<=1) return false;
    if(n==2) return true;
    if(n%2==0) return false;
    for(let i=3; i<=Math.floor(Math.sqrt(n)); i++){
        if(n%i == 0) return false;
        }
        return true;
    }
    */


    // break and continue
    // break loop ko rokta hai 
    // continue loop ko skip kar deta hai agle value par 
    // for(let i=1; i<=22; i++){
    //     if(i==15) break;
    //     console.log(i);
        
    // }

    // for(let i=2; i<=50; i++){
    //     if(i==25) continue;
    //     console.log(i);
        
    // }

    // start;
    // while (end) {
    //     //code
    //     change;
    // }

    // let i=1;
    // while (i<21) {
    //     console.log(i);
    //     i++;
        
    // }

    /*let ans = prompt("kuchh bhi dedo(exit for close)");

    while (ans !== 'exit') {
        ans = prompt("kuchh bhi dedo(exit for close)");

    }*/