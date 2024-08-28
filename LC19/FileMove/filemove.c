#include <stdio.h>
#include <stdlib.h>

/* Example 3 - jumping & getting element count */

int main(void)
{

	 int ValRead;
	 int Item;
	 int Locn;
	 FILE *fptr;
	 /* Open the file from example 1 */

	 fptr = fopen ("data.dat","rb");
	 if ( fptr == NULL )                                             
	 {
	   printf ("\nError opening input file - aborting ");
	   exit (0);
	 }
	 
	 /* Ask the user which value to jump to */
	 printf ("\nWhich value do you wish to view ? ");
	 scanf ("%d",&Item);
	 
	 /* Jump to this item                    */
	 /* notice we move in steps of item size */    
	 
	 Locn = Item * sizeof(int);
	 fseek (fptr, Locn, SEEK_SET);
	 
	 /* And read a single integer in */
	 if (fread (&ValRead, sizeof(int), 1, fptr ) == 1)
	 {
		/* Display the read value */
		printf ("Item %d is %d\n",Item,ValRead);
	 }
	 else
	 	printf("Failed to read at location %d\n", Item);
								   
	 /* And close */
	 fclose (fptr); 
	 
	 /* All Done */
	return 0;
	
}
 