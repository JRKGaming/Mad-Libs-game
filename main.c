#include <stdio.h> //Required libraries for any C program to run
#include <stdlib.h>

int main() // Every C program needs a main() function
{
    printf("Mad Libs game by Joseph\n\n"); // Print out an introduction
    char colour[20]; // Define the variables. The [20] means you are allowed to enter 20 letters only
    char pluralNoun[20];
    char stuff[20];

    printf("Enter a colour: "); // Prompt the user for a colour. I follow British English so its colour
    scanf("%s", colour); // Take an input. Only one word or else it wont work
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun);
    printf("Enter your favourite thing: "); // Again, I follow British English
    scanf("%s", stuff);


    printf("\n\nRoses are %s\n", colour); //Print it in to the screen
    printf("%s are blue\n", pluralNoun);
    printf("I love %s\n\n", stuff);

    printf("Press any key to exit"); // Says it all
    getch();
}
