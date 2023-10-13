#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//we use struct or array => as all vars have same data type
typedef struct {
    char username[25];
    char email[25];
    char password[25];
} User;

User users;
User newUser;

void signUp() {

    printf("Enter a username: ");
    scanf("%s", users.username);
    
    printf("Enter a email: ");
    scanf("%s", users.email);
    
    printf("Enter a password: ");
    scanf("%s", users.password);
    printf("Sign up successful.\n");
    
}

void signIn() {
   
    printf("Enter your username: ");
    scanf("%s", newUser.username);

    printf("Enter a email: ");
    scanf("%s", newUser.email);
    
    printf("Enter your password: ");
    scanf("%s", newUser.password);

        if (strcmp(users.username, newUser.username) == 0 &&strcmp(users.email, newUser.email) == 0 && strcmp(users.password, newUser.password) == 0) {
            printf("Sign in successful.\n");
        }
    else
    printf("Invalid username or password.");
}


int main() {
     
     printf("SignUp ... \n");
     signUp();
     
 printf("___________________\n");
 
      printf("\nSignIn ...\n ");
     signIn();

    return 0;
}
