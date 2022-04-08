#include <stdio.h>
#include <stdlib.h>

int main(void) // Main : Execution starts here...
{
    // Declare variables - pre-populate the array
    int Ages[10] = {12,34,23,11,8,19,6,44,9,16};
    int i;

    // Loop from 0 to 9 inclusive
    for  ( i = 0 ; i < 10 ; i++ )
        printf ("Item %d contains value %d\n",i ,Ages[i]);

    // Exit the application
    return 0;
}