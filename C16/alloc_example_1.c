#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // Declare an integer array and an integer pointer
    int *pData;

    // Using malloc
    pData = malloc ( 10000 * sizeof (int));

    // Using calloc
    pData = calloc ( 10000 , sizeof (int));

    return 0;   // Exit
}