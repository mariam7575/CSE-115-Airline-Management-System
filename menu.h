#include <stdio.h>
void mainMenu()
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Airline Reservation System ***\n\n");
    printf("\t\t\t\t\t\t\t\t--------------------------------------------\n\n");
    printf("\t\t\t\t\t\t\t\t 1. Menu\n\n");
    printf("\t\t\t\t\t\t\t\t 2. Flight Schedule\n\n");
    printf("\t\t\t\t\t\t\t\t 3. EXIT\n\n");
    printf("\t\t\t\t\t\t\t\t--------------------------------------------\n\n");

    printf("\t\t\t\t\t\t\t\tEnter Your Choice:     ");
    int mo;
    scanf("%d", &mo);
    if (mo == 1)
        menu();
    else if (mo == 2)
        flightSchedule(1);
    else if (mo == 3)
        instruction();
    else if (mo == 4)
        exitScreen();
    else
        goto mainMenu;
}
void menu()
{

    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Menu***\n\n");
    printf("\t\t\t\t\t\t\t\t--------------------------------------------\n\n");
    printf("\t\t\t\t\t\t\t\t 1. Reservation\n\n");
    printf("\t\t\t\t\t\t\t\t 2. Flight Schedule\n\n");
    printf("\t\t\t\t\t\t\t\t 3. Print my ticket\n\n");
    printf("\t\t\t\t\t\t\t\t 4. Back to MainMenu\n\n");
    printf("\t\t\t\t\t\t\t\t--------------------------------------------\n\n");
     int mo2;
    scanf("%d", &mo2);
    if (mo2 == 1)
        reservation();
    else if (mo2 == 2)
        flightSchedule(2);
    else if (mo2 == 3)
        printTicket();
    else if (mo2 == 4)
        mainMenu();
    else
        goto menu;
}
int Flightschedule(void)

{
    FILE *fptr;
    fptr=fopen("schedule.txt","r");
    char ch;
    ch=fgetc(fptr);
    while (ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(fptr);
    }
    printf("\n");
    fclose(fptr);
    return 0;
}
void reservation(void)
{
    
}