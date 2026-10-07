/*#include<stdio.h>
int main () {
// Write a program to check if a number is divisible by 2 or not?
int num;
printf("Enter number");
scanf("%d", &num);
printf("%d", num % 2 == 0);
return 0;
}*/

/* // write a program to check if a number is odd or even?
#include<stdio.h>
int main (){
    int num;
    printf("Enter a number");
    scanf("%d", &num);
    printf("%d", num % 2 == 0);
    return 0; 
} */

/* #include<stdio.h>

int main () {
    int age;
    printf("Enter age");
    scanf("%d", &age);

    if(age > 18) {
        printf("You are an Adult");
    } else {
        printf("You are not an adult");
    }


    return 0;
} */

/*#include <stdio.h>

int main() {
    int mark;
        printf("Enter mark");
        scanf("%d", &mark);
    
    if(mark > 90) {
        printf("Print grade is : A++");
    } else if (80 < mark < 90) {
       printf("Print grade is : A+");
    } else {
        printf("grade is : f");
    }


        return 0;
} */

/*#include <stdio.h>

int main() {
        int day;  // 1-mon, 2-tues, 3-wed
        printf("enter day(1-7)  : ");
        scanf("%d", &day);
        switch (day) {
            case 1 : printf("Monday \n");
                     break;
            case 2 : printf("tuesday \n");
                     break;
            case 3 : printf("wednesday \n");
                     break;
            case 4 : printf("thursday \n");
                     break;
            case 5 : printf("friday \n");
                     break;
            case 6 : printf("saturday \n");
                     break;
            case 7 : printf("sunday \n");
                     break;
            default : printf("nat a valid day! \n");
        }
        
        return 0;
}*/

/* #include <stdio.h>

int main() {
        char day;  // m-mon, t-tues, w-wed, T, F, 
        printf("enter day(1-7)  : ");
        scanf("%c", &day);
        switch (day) {
            case 'm' : printf("Monday \n");
                     break;
            case 't' : printf("tuesday \n");
                     break;
            case 'w' : printf("wednesday \n");
                     break;
            case 'T' : printf("thursday \n");
                     break;
            case 'F' : printf("friday \n");
                     break;
            case 'S' : printf("saturday \n");
                     break;
            case 's' : printf("sunday \n");
                     break;
            default : printf("nat a valid day! \n");
        }
        
        return 0;
} */





// Write a program to check if a student passed or failed
//  marks > 30 is pass
//  marks <= is fail

/* #include <stdio.h>

int main() {
        int marks;
        printf("enter marks(0-100) :  ");
        scanf("%d", &marks);

        // if (marks > 30) {
        //     printf("Students are passed");
        // }
        // else {
        //     printf("Students are failed");
        // }

        marks <= 30 ? printf("Fail  \n"): printf("Pass \n");
        return 0;
} */

// Practice Qs 10
// Write a program to give grades to a student
// marks < 30 is C
// 30 <= marks < 70 is B
// 70 <= marks < 90 is A 
// 90 <= marks <= 100 is A+

// #include <stdio.h>

// int main() {
//         int marks;
//         printf("Enter marks: ");
//         scanf("%d", &marks);
//         if (marks < 30) {
//             printf("Grades is C \n");
//         } else if (30 <= marks&& marks < 70) {
//             printf("Grade is B \n");
//         } else if (70 <= marks&& marks < 90) {
//             printf("Grades is A \n");
//         } else {
//             printf(" Grades is A++\n");
//         }

//         return 0;
// }

