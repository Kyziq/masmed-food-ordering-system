#include <stdio.h>
#include <stdlib.h> // To use exit(0) function

/* Structs */
// typedef keyword to create an alias name for data types. It is commonly used with structures to simplify the syntax of declaring variables.
typedef struct User
{
    int userLevel; // userLevel, 1 = admin, 2 = user
} user;

typedef struct Movie
{
    char movieName[50];
    float movieFee;
} movie;

/* User-defined functions */
int welcomeMessage()
{
    // Login
    int loginInput;
    printf("----------------------------------------------------------------------\n");
    printf("Welcome to Golden Screen Cinema Ticket Booking System!\n");
    printf("Choose your input:\n");
    printf("1. Login as an admin\n");
    printf("2. Login as a user\n");
    printf("3. Exit\n");
    printf("----------------------------------------------------------------------\n");
    scanf("%d", &loginInput);
    return loginInput;
}

int userFunction(int input)
{
    if (input == 1)
    {
        printf("Movie name?\n");
        printf("----------------------\n");
        printf("Press 1 for Dr Strange Multiverse of Madness\n");
        printf("Press 2 for Fantastic Beast The Secrets of Dumbledore\n");
        printf("Press 3 for Resident Evil Welcome to Raccoon City\n");
        printf("Press 4 for Exiting the program\n");
        // To purchase ticket
    }
    else if (input == 2)
    {

        // To cancel the seat
    }
    else if (input == 3)
    {
        // Exit
        printf("See you soon!\n");
        exit(0);
    }
}

int adminFunction(int input)
{
    if (input == 1)
    {
        // View reserved tickets
    }
    else if (input == 2)
    {
        // Edit price of the tickets
    }
    else if (input == 3)
    {
        // Exit
        printf("See you soon!\n");
        exit(0);
    }
}
// declaring struct movie dictionary
struct movie
{
    char name[32];
    char date[16];
    char time[16];
    int hall;
    int seat;
    float price;
};
/* Main function */
int main()
{
    // inserting information into dr strange movie
    struct movie drstrange;
    strcpy(drstrange.name, "Dr Strange Multiverse of Madness");
    strcpy(drstrange.date, "27-07-2022");
    strcpy(drstrange.time, "8.00p.m.");
    drstrange.price = 17.5;

    // inserting information into fantastic beast movie
    struct movie fantastic;
    strcpy(fantastic.name, "Fantastic Beast The Secrets of Dumbledore");
    strcpy(fantastic.date, "28-07-2022");
    strcpy(fantastic.time, "4.00p.m.");
    fantastic.price = 18.50;

    // inserting information into resident evil movie
    struct movie resident;
    strcpy(resident.name, "Resident Evil Welcome to Raccoon City");
    strcpy(resident.date, "28-07-2022");
    strcpy(resident.time, "6.00p.m.");
    resident.price = 19.00;

    int loginInput = welcomeMessage();

    int input;
    if (loginInput == 1) // admin
    {
        printf("Welcome admin!\n");
        printf("Indicate your preference by entering the appropriate number:\n");
        printf("1. View the reserved tickets\n");
        printf("2. Edit the price of ticket\n");
        printf("3. Exit\n");
        scanf("%d", &input);

        adminFunction(input);
    }
    else if (loginInput == 2) // user
    {
        printf("Welcome user!\n");
        printf("Please indicate your preference by entering the appropriate number:\n");
        printf("1. To purchase ticket\n");
        printf("2. To cancel the seat\n");
        printf("3. Exit\n");
        scanf("%d", &input);

        userFunction(input);
    }
    else if (loginInput == 3)
    {
        printf("See you soon!\n");
        exit(0);
    }
    return 0;
}
