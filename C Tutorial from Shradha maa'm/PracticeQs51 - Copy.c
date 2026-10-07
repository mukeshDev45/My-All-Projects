// Salting
// Find the salted from of a password entered by user if the salt is "123" & added at the end.

// solve for concept
/*
password = "test"
salt = "123"
newPassword = "test123"
*/

#include <stdio.h>

void salting(char password[]);

int main() {
    char password[100];
    scanf("%s", password);
    salting(password);
        
        return 0;
}


void salting(char password[]) {
    char salt[] = "123";
    
    char newPassword[200];

    strcpy(newPassword, password);  // newPass = "test"
    strcat(newPassword, salt);   // newpass =  "test" + "123"
    puts(newPassword);
    

}