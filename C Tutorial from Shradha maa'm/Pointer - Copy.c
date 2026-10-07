// #include <stdio.h>
// int main() {
//         int age = 22;
//         int *ptr = &age;
        

//         // address
//         //printf("%p\n", &age);
//         printf("%u\n", &age);

//         printf("%u\n",ptr);
//         return 0;
// }
// #include <stdio.h>
// int main() {
//         int age = 22;
//         int *ptr = &age;
        

//         // value
//         printf("%d\n", age);
//         printf("%d\n", *ptr);
//         printf("%d\n", *(&age));
        
//         return 0;
// }



// pointer to pointer
// #include <stdio.h>

// int main() {
//         // float price = 100.00;
//         // float *ptr = &price;
//         // float **pptr = &ptr;

//        int i = 5;
//        int *ptr = &i;
//        int **pptr = &ptr;


//        printf("%d", **pptr);






//         return 0;
// }

// #include <stdio.h>

// void square(int n);
// void _square(int*n);

// int main() {
//     int number = 4;
//     square(number);
//     printf("number = %d\n", number);





//     _square(&number);
//     printf("number = %d\n", number);
        
//         return 0;
// }

// // call by value
// void square(int n) {
//     n = n * n;
//     printf("square = %d\n", n);
// }

// void _square(int*n) {
//     *n = (*n) * (*n); // 4 * 4
//     printf("square = %d\n", *n);
// }

// Practice Question
// Swap 2 numbers, a & b.    a = 3; & b = 5;

// #include <stdio.h>

// void swap(int a, int b);
// void _swap(int*a, int*b);

// int main() {
//     int x = 3, y = 5;
//         _swap(&x, &y);
//         printf("x = %d & y = %d\n", x,y);
//         return 0;
// } 


//  // call by value
// void swap(int a, int b) {
//     int t = a;
//     a = b;
//     b = t;
//     printf("a = %d & b = %d\n", a,b);
// }


// //call by reference
// void _swap(int*a, int*b) {
//   int t = *a;
//   *a = *b;
//   *b = t;
// }


//   #include <stdio.h>

//   void printAddress(int n);

  
//   int main() {
//         int n = 4;
//         printAddress(n);
//         printf("address of n : %u\n",&n);
//         return 0;
//   }


//   void printAddress(int n) {
//     printf("address of n : %u\n",&n);
//   }



// Write a function to calculate the sum, product & average of 2 numbers. print that average in the main function.
// a + b;  a*b;  (a+b)/2

/*
#include <stdio.h>

void doWork(int a, int b, int *sum, int *prod, int *avg);

int main() {
        int a = 3, b = 5;
        int sum, prod, avg;
        doWork(a, b, &sum, &prod, &avg);


        printf("sum = %d, prod = %d, avg = %d", sum, prod, avg);
        return 0;
}

void doWork(int a, int b, int *sum, int *prod, int *avg) {
     *sum = a+b;
     *prod = a*b;
     *avg = (a+b)/2;
}
*/




