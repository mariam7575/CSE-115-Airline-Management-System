#include <stdio.h>
#include <stdlib.h>
#include "splash.h"
#include <unistd.h>
#include "login.h"
void splashscreen(void);
int main(void)
{
    splashscreen();
    sleep(5);
    system("cls");
    sleep(2);
    char username[50];
 char password[50];
printf("Enter required username:\n");
gets(username);
printf("Enter your password:\n");
gets(password);
username_password(username,password);

    return 0;
}


