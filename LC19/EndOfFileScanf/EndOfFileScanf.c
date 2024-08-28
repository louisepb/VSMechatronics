#include <stdio.h>
#include <stdlib.h>

// Main () - execution starts here
int main (void)
{
    // Declate file stream variables
    FILE *fInput, *fOutput;

    // Other variables needed
    int i,d;

    // Try and open the text "sample.txt" (in the current directory) file for writing
    fOutput = fopen ("numbers.txt", "w");

    // Check we were able to open the file
    if ( fOutput == NULL)
    {
        printf ("\nthe file could not be opened for writing, exiting");
        return -1;
    }

    // Use a loop to write values to the newly created file
    for ( i = 1 ; i <= 10 ; i++)
    {
        fprintf (fOutput, "%d\n", i);
    }

    // And close the file
    fclose (fOutput);

    // Try and open the text "numbers " (in the current directory) file for reading

    fInput = fopen ("numbers.txt", "r");

    // Check we were able to open the file
    if ( fInput == NULL)
    {
        printf ("\nthe file could not be opened for reading, exiting");
        return -1;
    }

    // Read, line by line the 10 values written into variable d
    // and then display the contents of d on the screen
    while (fscanf (fInput, "%d", &d) != EOF)
    {
        printf ("Value read from file %d\n",d);
    }

    // And close the file
    fclose (fInput);

    return (0);     // Exit indicating success
}
