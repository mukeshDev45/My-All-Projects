
// // Swap two number program or code
// #include <stdio.h>

// void Swap(int *a, int *b){
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int main() {
//     int num1, num2;

//     printf("Enter the first number: ");
//     scanf("%d", &num1);

//     printf("Enter the second number: ");
//     scanf("%d", &num2);

//     printf("\nBefore swaping: num1 = %d, num2 = %d", num1,num2);
//     Swap(&num1, &num2);
//     printf("After swaping: num1 = %d, num2 = %d", num1, num2);

        
//         return 0;
// }

// program for input 5 integers into one-dimensional array and print them in reverse order 

/*
#include <stdio.h>

int main() {
        int numbers[5];

        // Input 5 integers
        printf("Enter 5 integers: \n");
        for(int i=0; i<5; i++){
            printf("Number %d:", i+1);
            scanf("%d", &numbers[i]);
        }

        // Print in reverse order 
        printf("\nNumbers in reverse order:\n");
        for(int i=4; i>=0; i--){
            printf("%d", numbers[i]);
        }
        printf("\n");
        return 0;
}*/

// Develop a program to count the number of vowels in a given string
/*
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    for (int i = 0; str[i] != '\0'; i++) {
        char ch = tolower(str[i]);

        if(ch == 'a' || ch == 'e' || ch =='i' || ch == 'o' || ch == 'u'){
            count++;
        }
    }
    printf("Numbers of vowels in the string: %d\n", count);
        
        return 0;
}
        */


        // count the number of vowels and consonants in a given string entered by user.
        /*
        #include <stdio.h>
        #include <ctype.h>
        
        int main() {
            char str[100];
            int vowels = 0, consonant = 0;
     
            printf("Enter a string:");
            fgets(str, sizeof(str), stdin);
            for(int i=0; str[i] != '\0'; i++) {
                char ch = tolower(str[i]);

                if(isalpha){
                    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u'){
                        vowels++;
                    } else {
                        consonant++;
                    }
                }
            }
            printf("Number of vowels:%d\n", vowels);
            printf("Numbers of consonant:%d\n", consonant);
                return 0;
        }
                */

            

            // without using strlen finding length
            /*
            #include <stdio.h>
            
            int main() {
                    char str[100];

                    printf("enter string  : ");
                    fgets(str, 100, stdin);
                    int count = 0;

                    for (int i = 0; str[i] != '\0'; i++){
                        count++;
                    }

                    printf("the size is: %d", count-1);

                    return 0;
            }
                    */

            // bubble sort technique. in ascending order.
            /*#include <stdio.h>
            
            void bubbleSort(int arr[], int n){
                for(int i = 0; i<n-1; i++)
                for(int j = 0; j<n-i-1; j++)
                if (arr[j]>arr[j+1]){
                    // swap
                    int temp = arr [j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
            int main() {
                int arr[] = {5, 2, 9, 1, 5, 6};
                int n = sizeof (arr) / sizeof (arr[0]);
                 bubbleSort(arr, n);

                 for(int i = 0; i<n; i++){
                    printf("%d\t", arr[i]);
                 }
                    
                    return 0;
            }*/

            //making function for even or odd
            /*
            #include <stdio.h>

            int isEven(int n);
            
            int main() {
                int n;
                printf("enter number: ");
                scanf("%d", &n);
                printf("%d", isEven(n));
                return 0;
            }
            int isEven(int n){
                if(n%2==0){
                  return 1;
                  // print(1);
                } else {
                    return 0;
                    //printf("0");
                }
            }
                */


            //Linear Search 
            #include <stdio.h>
            
            int main() {
                    int array[100], n, i, search, found;

                    printf("Enter number of elements in the array: ");
                    scanf("%d", &n);

                    printf("Enter %d element : \n", n);

                    for(i=0; i<n; i++){
                        scanf("%d", &array[i]);
                    }

                    printf("Enter the elements to search: ");
                    scanf("%d", &search);

                    for(i=0; i<n; i++){
                        if(array[i] == search){
                            printf("elemenr %d found at position %d(index%d)\n", search, i + 1, i);
                            found = 1;
                            break;
                        }
                    }

                    if(!found){
                        printf("Element %d not found in thr array\n", search);
                    }
                    
                    return 0;
            }


                    