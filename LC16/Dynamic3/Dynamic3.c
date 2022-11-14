/* An example of

	Creating dynamically an array
	Populating the array
	Displaying the contents
	Freeing up the memory

	Version 3 : Read and Write values using pointers


*/

#include <stdio.h>
#include <stdlib.h>


int main(void)
{
   int *ipArray = NULL;         /* Create the pointer and set   */
				/* to null to start with        */

   int *ipStartValue = NULL;    /* A place to store ipArray's   */
				/* initial value ,ie ipArray[0] */
   int iSize = 0;               /* Define our 'size' variable   */

   int i;                       /* A Loop variables             */

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

   /* Store the base memory address for use later */
   ipStartValue = ipArray;

   /* Populate the array (Method 2 - Use Pointers: This is much faster !) */
   for ( i = 0 ; i < iSize ; i++ )
     *ipArray++ = iSize - i;
     

   /* Reset the pointer to the origin of the array */
   ipArray = ipStartValue;

   /* display the data */
   for ( i = 0 ; i < iSize ; i++ )
     printf("Value %d is %d\n",i,*ipArray++ );

   /* free memory : Again, reset ipArray to its origin */

   ipArray = ipStartValue;
   free(ipArray);

   /* The above two lines could be replaced with    free (ipStartValue)   */

   return 0;
}

