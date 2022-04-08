#include <stdio.h>
#include <stdlib.h>

// Main () - execution starts here
int main (void)
{

    // Declate file stream variables
    FILE *fInput, *fOutput, *fRecords;


    // Try and open the text "sample.txt" (in the current directory) file for reading
    fInput = fopen ("sample.txt", "r");

    // Check we were able to open the file
    if ( fInput == NULL)
    {
        printf ("\nthe file could not be opened");
        return -1;	// Exit as unsuccessful 
    }
    
	fclose (fInput);	// Close the file

    // Try and open the binary "samples.dat" (in the current directory) file for writing
    // if a file of this name already exists it will be deleted
    fOutput = fopen ("samples.dat", "wb");

    // Check we were able to open the file
    if ( fOutput == NULL)
    {
        printf ("\nthe file could not be opened");
		return -1;	// Exit as unsuccessful 
    }

	fclose (fOutput);	// Close the file

    // Open, for appending, the text file "records.txt". If the file does not already
    // exists, a new one of this name will be created (as if "w") were the mocde
    fRecords = fopen ("records.txt", "a");

    // Check we were able to open the file
    if ( fRecords == NULL)
    {
        printf ("\nthe file could not be opened");
		return -1;	// Exit as unsuccessful 
    }

	fclose (fRecords);


    return (0);     // Exit indicating sucess
}