#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // Declare an integer array and an integer pointer
    int *pData;

    pData = calloc ( 10000 , sizeof (float));           // No warning
    pData = (float *)calloc ( 10000 , sizeof (float));  // Warning

    return 0;   // Exit
}