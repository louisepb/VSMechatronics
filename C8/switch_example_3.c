#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    int a = 1;
    switch ( a )
    {
    case 1 :
        printf ("This is case 1\n");
    case 2 :
        printf ("This is case 2\n");
    case 3 :
        printf ("This is case 3\n");
        break ; // end of the lines of code to execute

    default: // If no case is met
        printf ("This default case\n");
        // Code to do if no case is met
    }
    return 0;
}