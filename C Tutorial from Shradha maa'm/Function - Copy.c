// // Chapter = 5  Functions
// #include <stdio.h>
// // declaration/prototype
// void printHello();


// int main() {
//         printHello(); //function call
//         printHello();
//         printHello();
//         return 0;
// }

// //function definition
// void printHello(){
//     printf("Hello!\n"); 
//     printf("My name is mukesh\n");
// }

// Write a function - one to print "Hello"  & second to print "good bye"
/*
#include <stdio.h>

void printHello();
void printGoodbye();

int main() {
    printHello();
    printGoodbye();
    printHello();
        return 0;
}


void printHello(){
    printf("Hello\n");

}

void printGoodbye(){
    printf("Goodbye:\n");
}
    */

    // Write a function that prints Namaste if user is Indian & Bonjour if the user is French.
 /*
    #include <stdio.h>
    void Namaste();
    void Bonjour();
    
    int main() {
        printf("enter f for french & i for indian :");
        char ch;
        if(ch == 'i'){
            Namaste();
        } else{
            Bonjour();
        }
            return 0;
    }

    void Namaste(){
    printf("Namaste\n");
    }

     void Bonjour(){
    printf("Bonjour\n");
    }
    */

    /*#include <stdio.h>
    
    int sum(int a, int b);

    int main() {
        int a, b;
        printf("enter first number : ");
        scanf("%d", &a);
        printf("enter second number : ");
        scanf("%d", &b);
            

        int s = sum(a, b);
        printf("sum is : %d \n", s);
            return 0;
    }

    int sum(int a, int b) {
        return a + b;
    }*/

    /*
    #include <stdio.h>
    
    int sum(int a, int b);
    void printTable(int n);

    int main() {
        int n;
        printf("enter number : ");
        scanf("%d", &n);
        
        printTable(n);//Argument or Actual Parameter
            return 0;
    }

    int sum(int a, int b) {
        return a + b;
    }

    void printTable(int n){ //parameter/ formal parameter
        for(int i=1; i<=10; i++){
            printf("%d \n", i*n);  // Passing argument
        }
    }
*/


// write a function to calculate area of a sqare, a circle & a rectangle.
/*
#include <stdio.h>



float squareArea(float side);
float circleArea(float rad);
float rectangleArea(float a, float b);



int main() {
    float a = 5.0;
    float b = 10.0;

    printf("area is : %f", rectangleArea(a, b));
        return 0;
}

float squareArea(float side) {
    return side * side;
}

float circleArea(float rad) {
    return 3.14 * rad *rad;
}

float rectangleArea(float a, float b){
    return a * b;
}
    */
   