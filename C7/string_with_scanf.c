#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    char name[50];

    // Wait for a kepypress, store result in c
    printf ("Please enter your name");

    // read in using scanf with %s
    scanf ("%s",name);

    // Display on the screen using printf
    printf ("Hello %s\n", name);

    // Exit from main
    return 0;
}