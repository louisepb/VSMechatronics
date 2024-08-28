#include <stdio.h>
#include <stdlib.h>

struct MyStruct
{
    int NoItems;
    int max;
    float average;
};

int main()
{

    struct MyStruct MyRecord;
    FILE *fptr;

    int ArrayData[100];
    int items = 0;
    int sum = 0;
    int i;



    /* Write this file to disk - binary format, usual error checking */
    fptr = fopen ("strdata.dat","wb");
    if ( fptr == NULL )
    {
        printf ("\nError creating file - aborting ");
        exit (0);
    }

    /* Populate the array & set header values*/
    for ( i = 0 ; i < 100 ; i++)
    {
        ArrayData[i] = i;
        if ( ArrayData [i] > MyRecord.max)
            MyRecord.max = ArrayData[i];
        sum = sum + ArrayData[i];
        items++;
    }

    /* Update the values in the structure */
    MyRecord.NoItems = items;
    MyRecord.NoItems = (float)sum / (float)items;

    /* This line does the writing of the structure */
    fwrite ( &MyRecord, sizeof(struct MyStruct), 1, fptr);


    /* This line does the writing of the Array */
    fwrite ( &ArrayData[0],  sizeof(int),100, fptr);


    /* And close */
    fclose (fptr);

    /* To read the data we would use */

    fptr = fopen ("strdata.dat","rb");
    if ( fptr == NULL )
    {
        printf ("\nError opening input file - aborting ");
        exit (0);
    }

    /* This line does the reading */
    fread ( &MyRecord, sizeof(struct MyStruct), 1, fptr);
    printf ("No. items in the file = %d", MyRecord.NoItems);
    printf ("Maximum = %d", MyRecord.max);
    printf ("Average is = %.2f", MyRecord.average);

    /* And close */
    fclose (fptr);

    /* All Done */
    return 0;
}
