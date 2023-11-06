#include <stdio.h>
#include <stdlib.h>
#define PASSENGERS 30
#include "splash.h"
#include <unistd.h>
#include "login.h"
int  splashscreen(void);//for splash screen
void username_password(char username[50],char password[50]);//for login option
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


