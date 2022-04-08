#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // Declare an integer array and an integer pointer
    int *pData;

    // Using calloc (same approach malloc)
    pData = calloc ( 10000 , sizeof (int));

    if ( pData == NULL)
    {
        printf ("\nMemory could not be allocated - terminating");
        return -1;  // Use minus one as we did not exit sucesfully
    }

     // We have our  memory, make use of it here!

    // Free up the allocated memoey
    free (pData);

    return 0;   // Exit sucesfully
}