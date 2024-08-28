#include <stdio.h>
#include <stdlib.h>

/* Example 3 - jumping & getting element count */

int main()
{

 long FileBytes;
 FILE *fptr;
 /* Open the file from example 1 */

 fptr = fopen ("data.dat","rb");
 if ( fptr == NULL )                                             
 {
   printf ("\nError opening input file - aborting ");
   exit (0);
 }
                         
 /* Move to the end of file */
 fseek (fptr, 0, SEEK_END);
                              
 /* Get the byte size */
 FileBytes = ftell(fptr);
 
 /* Convert to size based on fact all int's */
 FileBytes = FileBytes / sizeof(int);
 
 /* Display the read value */
 printf ("No. of items in file is %ld\n",FileBytes);
                               
 /* And close */
 fclose (fptr); 
 
 /* All Done */
 return 0;
}
 