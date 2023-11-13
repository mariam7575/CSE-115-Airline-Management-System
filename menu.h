#include <stdio.h>
#include <string.h>
#define PASSENGERS 30
typedef struct //STRUCTURE
{
    int id; //10 digits
    char name[30];
    int age;
    char gender[10];
    int passport; //5 DIGITS
    char address[30];
    char contact[12];
    int luggage;

    char flight[6];
    char departure[15];
    char destination[15];
    char seatClass[30];
    char seatType[30];
    int bill;
} airline;
    airline pas[PASSENGERS];
    int indexx=0;

void menu(void);
int  reservation(void);
int flightSchedule(void);
int exitScreen(void);
void printTicket(void);
void mainMenu(void)
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
       flightSchedule();
    else if (mo==3)
     exitScreen();
}
void menu(void)
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Menu***\n\n");
    printf("\t\t\t\t\t\t\t\t--------------------------------------------\n\n");
    printf("\t\t\t\t\t\t\t\t 1. Reservation\n\n");
    printf("\t\t\t\t\t\t\t\t 2. Print my ticket\n\n");
    printf("\t\t\t\t\t\t\t\t 3. Back to MainMenu\n\n");
    printf("\t\t\t\t\t\t\t\t Enter your choice:  \n\n");
     int mo2;
    scanf("%d", &mo2);
    if (mo2 == 1)
        reservation();
    else if (mo2 == 2)
        printTicket();
    else if (mo2 == 3)
       mainMenu();
       else
        menu();
}
int flightSchedule()
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
int exitScreen(void)
{
    FILE *ptr;
    ptr=fopen("exit.txt","r");
    char ch;
    ch=fgetc(ptr);
    while (ch!=EOF)
    {
        printf("%c",ch);
        ch=fgetc(ptr);
    }
    printf("\n");
    fclose(ptr);
    return 0;
}
int reservation(void)//the reservation system
{
int po3=0;
do{
 printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Welcome to the Reservation System ***\n\n");
    printf("\t\t\t\t\t\t\t\tPassenger ID                      :");
    scanf("%d",&pas[indexx].id);
    printf("\t\t\t\t\t\t\t\tName                              :");
    fflush(stdin);
    gets(pas[indexx].name);

    printf("\t\t\t\t\t\t\t\tAge                               :");
    scanf("%d", &pas[indexx].age);

    printf("\t\t\t\t\t\t\t\tGender                            :");
    fflush(stdin);
    gets(pas[indexx].gender);

    printf("\t\t\t\t\t\t\t\tPassport No.                      :");
    scanf("%d", &pas[indexx].passport);

    printf("\t\t\t\t\t\t\t\tAddress                           :");
    fflush(stdin);
    gets(pas[indexx].address);

    printf("\t\t\t\t\t\t\t\tContact                           :");
    fflush(stdin);
    gets(pas[indexx].contact);

    printf("\t\t\t\t\t\t\t\tNumber of Luggage                 :");
    scanf("%d", &pas[indexx].luggage);
    flightSchedule();
    printf("\t\t\t\t\t\t\t\tEnter Your Choice:     ");
    int choice1;
    scanf("%d", &choice1);
if (choice1 == 1)
    {
        strcpy(pas[indexx].flight, "BG-093");
        strcpy(pas[indexx].departure, "DAC");
        strcpy(pas[indexx].destination, "CCU");
    }
    else if (choice1 == 2)
    {
        strcpy(pas[indexx].flight, "BG-095");
        strcpy(pas[indexx].departure, "LON");
        strcpy(pas[indexx].destination, "DAC");
    }
    else if (choice1 == 3)
    {
        strcpy(pas[indexx].flight, "BG-093");
        strcpy(pas[indexx].departure, "ZYL");
        strcpy(pas[indexx].destination, "DAC");
    }
    else if (choice1 == 4)
    {
        strcpy(pas[indexx].flight, "BG-093");
        strcpy(pas[indexx].departure, "CGP");
        strcpy(pas[indexx].destination, "DAC");
    }
    else if (choice1 == 5)
    {
        strcpy(pas[indexx].flight, "BG-093");
        strcpy(pas[indexx].departure, "CGP");
        strcpy(pas[indexx].destination, "CCU");
    }
    else
    {
        printf("\t\t\t\t\t\t\t\tInvalid choice.\nEnter choice correctly.\n");
        return 0;
    }
    printf("\t\t\t\t\t\t\t\t\t\t** Select Your Seat Class***\n\n");
    printf("\t\t\t\t\t\t\t\t----------------------------------------\n\n");
    printf("\t\t\t\t\t\t\t\tNumber------Seat Type----------Price\n\n");
    printf("\t\t\t\t\t\t\t\t 1.        First Class              $1300\n\n");
    printf("\t\t\t\t\t\t\t\t 2.        Economy Class           $800 \n\n");
    int choice2;
    scanf("%d",&choice2);
    if (choice2==1)
        strcpy(pas[indexx].seatClass,"First class");
    else if (choice2==2)
        strcpy(pas[indexx].seatClass,"Economy class");
    else
       {
    printf("Invalid choice,try again.");
    return 0;
    }
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\t*** Select Your Seat Type***\n\n");
    printf("\t\t\t\t\t\t\t\t--------------------------------------------\n\n");
    printf("\t\t\t\t\t\t\t\t Number------Seat Type\n\n");
    printf("\t\t\t\t\t\t\t\t   1.        Window Seat\n\n");
    printf("\t\t\t\t\t\t\t\t   2.        Normal Seat\n\n");
    printf("\t\t\t\t\t\t\t\t--------------------------------------------\n\n");

    printf("\t\t\t\t\t\t\t\tEnter Your Choice:     ");
    int choice3;
    scanf("%d", &choice3);
    if (choice3 == 1)
        strcpy(pas[indexx].seatType, "Window Seat");
    else if (choice3 == 2)
        strcpy(pas[indexx].seatType, "Normal Seat");
    else
    {
        printf("\t\t\t\t\t\t\t\tInvalid choice.\nEnter choice correctly.\n");
       return 0;
    }
    indexx++;
    printf("\t\t\t\t\t\t\t\tHave you filled all data?[Y/N]    :");
      char choice;
    fflush(stdin);
    scanf("%c", &choice);
   if (choice == 'Y' || choice == 'y')
    {
        printf("\n\n\t\t\t\t\t\t\t\tYou have filled out all informations correctly...\n");
        return 1;
    }

    else if (choice == 'N' || choice == 'n')
    {
        printf("\t\t\t\t\t\t\t\tFill out you information correctly this time.");
        return 0;
    }
po3=reservation();
}while(po3==0);
}
void printTicket(void)//for printing ticket
{
    printf("\n\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\t\t\tEnter Your Passenger ID:     ");
    int id;
    scanf("%d", &id);
    int ind = checkid(id);
    if (ind == -1)
        printf("NOT FOUND.TRY AGAIN");
        else{
    printf("\t\t\t\t\t\t\t\t---------------------------------------------------------\n\n");
    printf("\t\t\t\t\t\t\t\t                     *** Ticket ***\n\n");
    printf("\t\t\t\t\t\t\t\t---------------------------------------------------------\n\n\n\n");
    printf("\t\t\t\t\t\t\t\t--------------\n");
    printf("\t\t\t\t\t\t\t\t     Name           :%s\n", pas[ind].name);
    printf("\t\t\t\t\t\t\t\t     Passport No.   :%d\n", pas[ind].passport);
    printf("\t\t\t\t\t\t\t\t     Age            :%d\n", pas[ind].age);
    printf("\t\t\t\t\t\t\t\t     Gender         :%s\n", pas[ind].gender);
    printf("\t\t\t\t\t\t\t\t     Contact        :%s\n\n", pas[ind].contact);
    printf("\t\t\t\t\t\t\t\t     Flight No.                :%s\n\n", pas[ind].flight);
    printf("\t\t\t\t\t\t\t\t     Departure                 :%s\n\n", pas[ind].departure);
    printf("\t\t\t\t\t\t\t\t     Destination               :%s\n\n", pas[ind].destination);
        }
    menu();
}
int checkid(int id)//id check for tickets
{
    for (int i = 0; i < indexx; i++)
        if (pas[i].id == id)
            return i;
            else
            return -1;
}





