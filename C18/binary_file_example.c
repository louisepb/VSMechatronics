#include <stdio.h>
#include <stdlib.h>

// Main () - execution starts here
int main (void)
{

    // Declate file stream variables
    FILE *fInput, *fOutput;

    // Other variables needed
    int i;
    int SampleArray[10] = {1,2,3,4,5,6,7,8,9,10};
    float f = 23.4;

    // Try and open the binary "numbers.dat" (in the current directory) file for writing
    fOutput = fopen ("numbers.dat", "wb");

    // Check we were able to open the file
    if ( fOutput == NULL)
    {
        printf ("\nThe file could not be opened for writing, exiting");
        return -1;
    }

    // Write out a single float to the binary file
    fwrite ( &f, sizeof(float), 1 , fOutput);

    // Now the entire array on one go
    fwrite ( SampleArray, sizeof(int), 10 , fOutput);

    // And close the file
    fclose (fOutput);


    // Try and open the binary "numbers.dat" (in the current directory) file for reading
    fInput = fopen ("numbers.dat", "rb");

    // Check we were able to open the file
    if ( fInput== NULL)
    {
        printf ("\nthe file could not be opened for reading, exiting");
        return -1;
    }

    // Read a single float from the binary file into f
    fread ( &f, sizeof(float), 1 , fOutput);

    // Now read the entire array on one go
    fread ( SampleArray, sizeof(int), 10 , fOutput);

    // Display the values read from the file on the screen
    printf ("The value read into f is %f\n", f);;
    for ( i = 0 ; i < 10 ; i++)
    {
        printf ("Item %d of the array contains %d\n",i, SampleArray[i]);
    }

    // And close the file
    fclose (fInput);


    return (0);     // Exit indicating sucess
}