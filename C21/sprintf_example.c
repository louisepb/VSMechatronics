#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    char FileName[100];

    for ( i = 1 ; i < 10 ; i++)
    {
        //'Print' text into string
        sprintf(FileName , "file%d.dat" , i);

        // Sidplay the name created
        printf("Current file name: %s\n", FileName);
    }

    return 0;
}