#include <stdio.h>
#include <stdlib.h>
#include "splash.h"
#include <unistd.h>
#include "login.h"
#include "menu.h"
int  splashscreen(void);//for splash screen
int  username_password(char username[50],char password[50]);//for login option
void mainMenu(void);
void menu(void);
int flightSchedule(void);
void reservation(void);
void printTicket(void);
int checkid(int id);
int  exitScreen(void);
int main(void)
{
    splashscreen();
    sleep(5);
    system("cls");
    sleep(2);
    char username[50];
 char password[50];
 int login_success=0;
 do
 {
printf("Enter required username:\n");
gets(username);
printf("Enter your password:\n");
gets(password);
login_success=username_password(username,password);
 } while (login_success==0);
 mainMenu();
 menu();
flightSchedule();
 reservation();
printTicket();
checkid(-1);
exitScreen();
return 0;
}





