#include <stdio.h>
#include <string.h>
void username_password(char username[50],char password[50])//login function
{
    char req_username[]="Passenger";
    char req_pass[]="access";
    if(strcmp(username,req_username)== 0 && strcmp(password,req_pass)==0)
    {
        printf("Login successful.Welcome to Flysafe Airlines!\n",username);
    }
    else
    {
        printf("Invalid password and username,try again.");
    }
}
