/* An example of

	Creating dynamically an array
	Populating the array
	Displaying the contents
	Freeing up the memory

	Version 2 : Check memory has been assigned
				

	
*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
   int *ipArray = NULL;		/* Create the pointer and set   */
				/* to null to start with 	*/
   int iSize = 0;		/* Define our 'size' variable 	*/

   int i;			/* A Loop variables 	        */

   /* Prompt for array size */

   printf("\nHow big is the array to be ? ");
   scanf("%d",&iSize);

   /* Allocate the memory */
   ipArray = (int *)calloc(iSize, sizeof(int));

   if ( ipArray == NULL )
   {
      printf("\nUnable to allocate the memory requested");
      printf("\n  ** Program terminating ** \n");
      exit (1);
   }

   /* Populate the array (Method 1) */
   for ( i = 0 ; i < iSize ; i++ )
     ipArray[i] = iSize - i;

   /* display the data */
   for ( i = 0 ; i < iSize ; i++ )
     printf("Value %d is %d\n",i,ipArray[i] );

   /* free memory */
   free(ipArray);

   return 0;
}

