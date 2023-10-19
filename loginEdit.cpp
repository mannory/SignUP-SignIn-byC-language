#include <stdio.h>
#include <stdbool.h>
#include <string.h>

typedef struct {
    char username[25];
    char email[25];
    char password[25];
    union {
        int flagNum;
        bool flagStr;
    } activeInfo;
} User;

User users;
User newUser;

void signUp() {
    printf("Enter a username: ");
    scanf("%s", users.username);

    printf("Enter an email: ");
    scanf("%s", users.email);

    printf("Enter a password: ");
    scanf("%s", users.password);

    printf("Enter active status (0, 1, false, true): ");
    char input[10];
    scanf("%s", input);

    if (strcmp(input, "0") == 0 || strcmp(input, "false") == 0)  {
        users.activeInfo.flagNum = 0;
        users.activeInfo.flagStr = false;
        
    } else if (strcmp(input, "1") == 0 || strcmp(input, "true") == 0) {
        users.activeInfo.flagNum = 1;
        users.activeInfo.flagStr = true;
        
    } else {
        printf("Invalid active status input.\n");
        return;
    }

    printf("Sign up successful.\n");
}


void signIn() {
    if (users.activeInfo.flagNum == 1 || users.activeInfo.flagStr == true) {
        printf("User can log in successfully.\n");

        printf("Enter your username: ");
        scanf("%s", newUser.username);

        printf("Enter your email: ");
        scanf("%s", newUser.email);

        printf("Enter your password: ");
        scanf("%s", newUser.password);

        if (strcmp(users.username, newUser.username) == 0 && strcmp(users.email, newUser.email) == 0 &&
            strcmp(users.password, newUser.password) == 0) {
            printf("Sign in successful.\n");
        } else {
            printf("Invalid username, email, or password.\n");
        }
    } else {
        printf("User is not active. Cannot log in.\n");
    }
}

int main() {
    printf("Sign Up...\n");
    signUp();
    printf("_______\n");
    printf("Sign In...\n");
    signIn();
    return 0;
}
