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

    int iSizeForArray;
    int *pData;              // A pointer to hold the base address of out array

    // Ask for the size of the array and store result

    printf("\nPlease enter the size of the array to dynamically allocate");
    scanf ("%d", &iSizeForArray);

    // Use calloc with checking
    pData = calloc ( iSizeForArray, sizeof (int));

    // Check we got the memory
    if ( pData == NULL)
    {
        printf ("\nSorry, I could not allocate the memory, bye!");
        return -1;
    }

    // Pass the size, iSizeForArray) and the pointer created 
    // which points to the start of the sucesfully allocated memory

    PopulateTheArray(iSizeForArray, pData);
    DisplayTheArray(iSizeForArray, pData);

    free (pData);	    // Free up the memory before exiting

    return (0);     // Exit indicating sucess
}