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
 int AValue;



 /* Write this file to disk - binary format, usual error checking */
 fptr = fopen ("strdata.dat","wb");
 if ( fptr == NULL )
 {
   printf ("\nError creating file - aborting ");
   exit (0);
 }

 /* Pop some dummy data into our structure */
 MyRecord.NoItems = 0;
 MyRecord.max = 0; ;
 MyRecord.average = 0;

 /* This line does the writing of the structure */
 fwrite ( &MyRecord, sizeof(struct MyStruct), 1, fptr);

 /* Populate the array */
 for ( i = 0 ; i < 100 ; i++)
 {
	 ArrayData[i] = i;
	 if ( ArrayData [i] > MyRecord.max)
		 MyRecord.max = ArrayData[i];
	 sum = sum + ArrayData[i];
	 items++;
 }


 /* This line does the writing of the Array */
 fwrite ( &ArrayData[0],  sizeof(int),100, fptr);

 /* Update the values in the structure */
 MyRecord.NoItems = items;
 MyRecord.average= (float)sum / (float)items;

 /* rewind the file to write the structure again */
 fseek(fptr, 0, SEEK_SET);
 //rewind (fptr);

 /* This line does the writing of the structure */
 fwrite ( &MyRecord, sizeof(struct MyStruct), 1, fptr);

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
 printf ("No. items in the file = %d\n", MyRecord.NoItems);
 printf ("Maximum = %d\n", MyRecord.max);
 printf ("Average is = %.2f\n", MyRecord.average);

 // Get how far to move for the 10th item
 long Posn = sizeof (struct MyStruct) + (9 * sizeof(int));

 // Move
 fseek(fptr, Posn, SEEK_SET);

 // Read value
 fread ( &AValue, sizeof(int),1 , fptr);
 printf ("The 10th value is %d", AValue);

 /* And close */
 fclose (fptr);

 /* All Done */
 return 0;
}
