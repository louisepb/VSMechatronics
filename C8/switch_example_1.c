#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    int a = 1;
    switch ( a )
    {
    case 0 :
        printf ("Sunday\n");
        break ; // end of the lines of code to execute

    case 1:
        printf ("Monday\n");
        break ; // end of the lines of code to execute

    case 2:
        printf ("Tuesday\n");
        break ; // end of the lines of code to execute

    // etc...

    default: // If no case is met (OPTIONAL)
        printf ("\nThe value supplied is out of range\n");

    }
    return 0;
}