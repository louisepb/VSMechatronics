#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // declare variable
    char c;

    printf("Input a character: ");
    // Wait for a kepypress, store result in c
    c = getchar();

    // Display on the screen using printf
    printf ("The charcter pressed was %c\n", c);

    // Display the charcter using putchar()
    putchar(c);
    
    return 0;	    // Exit from main
}