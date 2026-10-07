// #include <stdio.h>

// int main() {
//         // int marks1 = 97;
//         // int marks2 = 85;
//         // int marks3 = 98;

//         // int marks[] = {97, 85, 98};

//         int marks[3];
//         printf("enter phy : ");
//         scanf("%d", &marks[0]);

//         printf("enter math : ");
//         scanf("%d", &marks[1]);

//         printf("enter che : ");
//         scanf("%d", &marks[2]);

//         printf("phy = %d, math = %d, che = %d", marks[0], marks[1], marks[2]);
//         return 0;
// }


// Practice Question
// Write a program to enter price of 3 items & print their final cost with gst.

// #include <stdio.h>

// int main() {
//     float price[3];
//     printf("enter 3 prices : ");
//     scanf("%f", &price[0]);
//     scanf("%f", &price[1]);
//     scanf("%f", &price[2]);

//     printf("total price 1 : %f\n", price[0] + (0.18*price[0]));
//     printf("total price 2 : %f\n", price[1] + (0.18*price[1]));
//     printf("total price 3 : %f\n", price[2] + (0.18*price[2]));
        
//         return 0;
// }

// #include <stdio.h>

// int main() {
//         int age = 22;
//         int *ptr = &age;
//         printf("ptr = %u", ptr);
//         ptr++;
//         printf("ptr = %u", ptr);
//         ptr--;
//         return 0;
// }


// #include <stdio.h>

// int main() {
//         int aadhar[5];

//         // input
//         int *ptr = &aadhar[0];
//         for(int i=0; i<5; i++){
//             printf("%d index : ", i);
//             scanf("%d", (ptr+i));
//         }

//         //output
//         for(int i=0; i<5; i++){
//             printf("%d index = %d\n", i, *(ptr+i));
//         }
//         return 0;
// }

// #include <stdio.h>

// void printNumbers(int *, int n);

// int main() {
//     int arr[] = {1, 2, 3, 4, 5, 6};
//     printNumbers(arr, 6);

        
//         return 0;
// }

// void printNumbers(int *arr, int n) {
//     for(int i=0; i<n; i++){
//         printf("%d \t", arr[i]);
//     }
//     printf("\n");
// }


// Multidimensional Arrays 

// #include <stdio.h>

// int main() {
//         // 2  x 3
//         int marks[2][3];
//       marks[0][0] = 95;
//       marks[0][1] = 99;
//       marks[0][2] = 97;

//       marks[1][0] = 95;
//       marks[1][1] = 99;
//       marks[1][2] = 97;


//       printf("%d", marks[0][0]);

//         return 0;
// }



// Practice Questions
// Write a function to count the number of odd numbers in an array.
// #include <stdio.h>

// int countOdd(int arr[], int n);

// int main() {
//         int arr[] = {1, 2, 3, 4, 5, 6};
//         printf("%d", countOdd(arr,6));
//         return 0;
// }


// int countOdd(int arr[], int n){
//     int count = 0;
//     for(int i=0; i<n; i++){
//         if (arr[i] %2 != 0){//odd numbers
//          count++;
//         }
//     }

//     return count;
// }


// write a function to reverse an array.
// #include <stdio.h>

// int countOdd(int arr[], int n);

// int main() {
//         int arr[] = {1, 2, 3, 4, 5};
//         printf("%d \n", *(arr+2));
//         printf("%d \n", *(arr+ 5));

//         return 0;
// }

// int countOdd(int arr[], int n){
//     int count = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i] % 2 != 0) {  //odd numbers
//             count++;
//         }
//     }
//     return count;
// }


// #include <stdio.h>

// int countOdd(int arr[], int n);
// void reverse(int arr[], int n);
// void printArr(int arr[], int n);

// int main() {
//         int arr[] = {1, 2, 3, 4, 5};
//         reverse(arr,5);
//         printArr(arr, 5);

//         return 0;
// }

// void printArr(int arr[], int n) {
//     for(int i=0; i<n; i++){
//         printf("%d\t", arr[i]);
//     }
//     printf("\n");
// }

// void reverse(int arr[], int n){
//     for(int i=0; i<n/2; i++){
//         int firstVal = arr[i];
//         int secondVal = arr[n-i-1];
//         arr[i] = secondVal;
//         arr[n-i-1] = firstVal;

//     }
// }

// int countOdd(int arr[], int n){
//     int count = 0;
//     for(int i=0; i<n; i++){
//         if(arr[i] % 2 != 0) {  //odd numbers
//             count++;
//         }
//     }
//     return count;
// }


// write  a program to store the first n fibonacci numbers.  0, 1, 1, 2, 3, 5, 8, 13, 21, 34.........
// nth = (n-1) + (n-2);
 /*
 #include <stdio.h>
 
 int main() {
    int n;
    printf("enter n (n>2) :");
    scanf("%d", &n);

    int fib[n];
    fib[0] = 0;
    fib[1] = 1;
    
    for(int i=2; i<n; i++) {
        fib[i] = fib[i-1] + fib[i-2]; //impoortant line
        printf("%d \t", fib[i]);
    }
        return 0;
 }
        */


  // Create a 2D array, storing the taables of 2 & 3.

  #include <stdio.h>

  void storeTable(int arr[][10], int n, int m, int number);
  
  int main() {
    int tables[2][10];
        storeTable(tables, 0, 10, 2);
        storeTable(tables, 1, 10, 3);

        for(int i=0; i<10; i++){ // 0 to 10
            printf("%d\t", tables[0][i]);
        }
          
        printf("\n");
        for(int i=0; i<10; i++){ // 0 to 10
            printf("%d\t", tables[1][i]);
        }

        return 0;
  }


  void storeTable(int arr[][10], int n, int m, int number) {
    for(int i=0; i<m; i++){ // 0 to 10
        arr[n][i] = number * (i+1);
    }
  }