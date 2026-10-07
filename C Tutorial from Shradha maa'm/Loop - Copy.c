// #include <stdio.h>

// int main() {
        
//         printf("Hello World  \n ");
//         printf("Hello World  \n ");
//         printf("Hello World  \n ");
//         printf("Hello World  \n ");
//         printf("Hello World  \n ");
//         printf("Hello World  \n ");
        
//         return 0;
// }


/* #include <stdio.h>

int main() { 
    // iterator ; counter
        
        for(int i = 1; i <= 100; i++) {
            printf("%d \n", i);
        }
        return 0;
} */


// #include <stdio.h>

// int main() {
//         for(int i = 0; i <= 500; i++) {
//             printf("%d \n", i);
//         }
//         return 0;
// }



/*  #include <stdio.h>

int main() {
        // increment operator
        //++i(pre increment operator)  
        // i++(post increment operator) 

        // Decrement operator
        //--i(pre decrement operator)
        // i--(post decrement operator)
        int i = 1;
        //printf("%d \n", i++);   // use, then increase
        //printf("%d \n", i);

       // printf("%d \n", ++i);   // increase, then use
        //printf("%d \n", i);



       // printf("%d \n", i--);   // use, then increase
        //printf("%d \n", i);

        printf("%d \n", --i);   // increase, then use
        printf("%d \n", i);
 
 
        return 0;
} */




/* #include <stdio.h>

int main() {
        for(float i=1; i<=5.0; i++) {
            printf("%f \n", i);
        }
        for(char ch='a'; ch <= 'z'; ch++) {
            printf("%c \n", ch);
        }
        return 0;
} */


// #include <stdio.h>

// int main() {
//         int i = 1;
//         while(i <= 10) {
//             printf("%d \n", i);
//             i++;
//         }
//         return 0;
// }



//Practice Qs 14
//Print the numbers from 0 to n, if n is given by user n=4


/* #include <stdio.h>

int main() {
    
        int n;
        printf("Enter a number : ");
        scanf("%d", &n);

        // int i=0;
        // while(i <= n){
        //     printf("%d \n", i);
        //     i++;
        // }
        for(int i=3; i<=n; i++) {
            printf("%d\n", i);
        }
        return 0;
} */




/* #include <stdio.h>

int main() {
        int i = 5;
        do {
            printf("%d \n", i);
            i--;
        } while(i >= 1);
        return 0;
}*/

// Practice Qs 15
// Print the Sum of First n Natural Numbers.
// n = 4
// Also, print them in reverse.

/* #include <stdio.h>

int main() {
        
        int n;
        printf("Enter the numbers :  ");
        scanf("%d \n", &n);

        int sum = 0;
        for(int i=1; i<=n; i++) {
            sum = sum + i; // sum += i
        }
        printf("sum is %d  \n", sum);

        for(int i=n; i>=1; i--) {
        printf(" %d  \n", i);
        }
        
        return 0;
} */


// Practice Qs 16
// Print  the table of a number input by the user.
// n = 2

/* #include <stdio.h>

int main() {
        int n;
        printf("Enter number :  ");
        scanf("%d \n", &n);

        for(int i=1; i<=10; i++) {
            printf("%d \n", n*i);
        }
        return 0;
} */



/* #include <stdio.h>

int main() {
        for(int i=1; i<=5; i++) {
            if(i == 3) {
                break;
            }
            printf("%d\n", i);
        }

        printf("end");

        return 0;
} */


// Practice Qs 17
// Keep taking numbers as input from user until user enters an odd numbers.
/* 
#include <stdio.h>

int main() {
        int num;
        
        do {
            printf("Enter number :  ");
            scanf("%d", &num);
            printf("%d \n",num);

            if(num % 2 != 0) {
                break;
            }
        } while(1);
        printf("thank you");
        return 0;
} */



// Practice Qs 18
// Keep taking numbers as input from user until user enters a number which is multiple of 7.

/* #include <stdio.h>

int main() {
        int n;
        do {
        printf("Enter your numbers : ");
        scanf("%d", &n);
        printf("%d \n", n);
        
        if(n % 7 == 0) { // multiple of 7
           break;
        }
    } while (1);
    printf("thank you \n6");
        


        return 0;
} */



/*#include <stdio.h>

int main() {
        for (int i=1; i<=5; i++) {
            if(i == 3) { //skip to next iteration
                continue;
            }
            printf("%d \n", i);
        }
        return 0;
}*/


/*Print all numbers from 1 to 10 except for 6.
#include <stdio.h>

int main() {
        for(int i=1; i<=10; i++) {
          if(i == 6) {  //skip to the 6
           continue;
          }
          printf("%d \n", i);
        }
        return 0;
}*/

// Practice Qs 20
// Print all the odd numbers from 5 to 50.
/* #include <stdio.h>

int main() {
        for(int i=5; i<=50; i++) {
            if(i % 2 != 0) {
                printf("%d \n", i);
            }
        }
        return 0;
} */

// Practice Qs 21
// Print the factorial of a number n.
/*#include <stdio.h>

int main() {
        int n;
        printf("enter your number : ");
        scanf("%d", &n);
        int fact = 1;
        for(int i=1; i<=n; i++) {
            fact = fact * i;
        }

        printf("final factoriaL is %d", fact);
        return 0;
}*/

// Practice Qs 22
// Print reverse of the table for a number n.
/* #include <stdio.h>

int main() {
        int n=2;
        printf("enter your number : ");
        scanf("%d ", &n);

        for (int i=10; i>=1; i--){
            printf("%d \n",n*i);
        }
        return 0;
}*/


// Practice Qs 23
// Calculate the sum of all numbers between 5 and 50.(including 5 & 50)

/*#include <stdio.h>

int main() {
        int sum = 0;
        for(int i=5; i<=50; i++){
            sum = sum + i;
        }
        printf("Sum is %d", sum);
        return 0;
}*/




