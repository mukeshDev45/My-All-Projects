#include <stdio.h>
#include <string.h>

// user defined
struct student {
    int roll;
    float cgpa;
    char name[100];
};

int main() {
    /*
    struct student s1;
    s1.roll = 1664;
    s1.cgpa = 9.2;
    //s1.name = "Mukesh";
    strcpy(s1.name, "Mukesh");

    printf("student name = %s\n", s1.name);
    printf("student cgpa = %f\n", s1.cgpa);
    printf("student roll = %d\n", s1.roll);
        


    struct student s2;
    s2.roll = 1478;
    s2.cgpa = 7.2;
    //s1.name = "Mukesh";
    strcpy(s2.name, "Rohit");

    printf("student name = %s\n", s2.name);
    printf("student cgpa = %f\n", s2.cgpa);
    printf("student roll = %d\n", s2.roll);


    struct student s3;
    s3.roll = 8888;
    s3.cgpa = 7.4;
    //s1.name = "Mukesh";
    strcpy(s3.name, "Sanjeet");

    printf("student name = %s\n", s3.name);
    printf("student cgpa = %f\n", s3.cgpa);
    printf("student roll = %d\n", s3.roll);
    */


    /*
    struct student ece[100];
     ece[0].roll = 5555;
     ece[0].cgpa = 9.5;
     strcpy(ece[0].name, "Mukesh");

     printf("name = %s\n", ece[0].name);
     */

     struct student s1 = {1777, 9.5, "Mukesh"};
     printf("student roll = %d\n", s1.roll);
     

     struct student *ptr = &s1;
     printf("student.roll with ptr= %d\n", (*ptr).roll);


     printf("student-> roll= %d\n", ptr->roll);
    
    
        return 0;
}