#include <stdio.h>
#include <stdlib.h>

// Simple function to populate an integer array 
void PopulateTheArray ( int Size, int ArrayData[])
{
    int i;      // Variable to use in our loop

    for ( i = 0 ; i < Size ; i++)
    {
        ArrayData[i] = 2*i + 1; // Treat it like a normal array
    }
}


// Simple function do display contents an integer array
void DisplayTheArray ( int Size, int ArrayData[])
{
    int i;      // Variable to use in our loop
 
    for ( i = 0 ; i < Size ; i++)
    {
        printf ("Item %d of the array contains %d\n", i, ArrayData[i]);
    }
}

// Main () - execution starts here
int main (void)
{
    int Data[10];

    // Pass the size of the array and the array to our function - 					
    // remembering that the array name on its own is the base address, 
    // and so is the same as passing &Data[0]

    PopulateTheArray(10, Data);
    DisplayTheArray(10, Data);

    return (0);     // Exit indicating sucess
}
