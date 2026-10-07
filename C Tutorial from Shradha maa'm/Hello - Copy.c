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



#include <stdio.h>

int main() {
        int number;
        printf("Enter number : ");
        scanf("%d", &number);

        if(number >= 0) {
            printf("positive  \n");
            if (number % 2 == 0) {
                printf("the number is Even");
            } else {
                printf("the number is Odd");
            }
        } else {
            printf("negative  \n");
        }
        return 0;
}