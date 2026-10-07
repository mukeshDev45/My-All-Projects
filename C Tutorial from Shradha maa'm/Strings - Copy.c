// #include <stdio.h>

// int main() {
//     char name[] = {'M', 'U', 'K', 'E', 'S', 'H', '\0'};  
//     char name[] = "MUKESH";
//     char class[] = "apna college";
        
//         return 0;
// }

// #include <stdio.h>

// void printString(char arr[]);

// int main() {
//     char name[50];
//     scanf("%s", name);
//     printf("your name is %s", name);
//         return 0;
// }


// void printString(char arr[]) {
//      for(int i=0; arr[i] != '\0'; i++) {
//         printf("%c", arr[i]);
//      }
//      printf("\n");
// }


// #include <stdio.h>

// void printString(char arr[]);

// int main() {
//     // char str[100];
//     // gets(str);
//     // puts(str);

//     char *canChange = "Hello World";
//     puts(canChange);
//     canChange = "Hello";
//     puts(canChange);
//         return 0;
// }


// void printString(char arr[]) {
//      for(int i=0; arr[i] != '\0'; i++) {
//         printf("%c", arr[i]);
//      }
//      printf("\n");
// }


// Make a program that inputs user's name & prints its length.

// #include <stdio.h>

// int countLength(char arr[]);

// int main() {
//     char name[100];
//     fgets(name, 100, stdin);
//     printf("length is : %d", countLength(name));
//     return 0;
// }

// int countLength(char arr[]) {
//     int count = 0;
//     for(int i=0; arr[i] != '\0'; i++) {
//         count++;
//     }
//     return count-1;
// }


// #include <stdio.h>
// #include <string.h>

// void printString(char arr[]);
// int countLength(char arr[]);

// int main() {
//         char firstStr[100] = "Hello";
//         char secString[] = "World";
//         strcat(firstStr, secString);
//         puts(firstStr);
        
//         return 0;
// }