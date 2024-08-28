#include <stdio.h>
#include <stdlib.h>

struct DataSet			/* Define a struture called DataSet */
{
	int x;			/* The X data */
	int y;			/* The Y data */
};


int main(void)
{

   struct DataSet	MyPoints[5];	/* Define array of structure,   */
					/* 	type DataSet 		*/
					/*	Elements : 5 		*/

   int i;				/* Define an integer */



   for ( i = 0 ; i < 5 ; i++ )		/* Populate structure */
   {
      MyPoints[i].x = i;
      MyPoints[i].y = i*i;
   }

   printf("\nThe dataset values are ");	/* Display message & Values */

   for ( i = 0 ; i < 5 ; i++ )
   {
      printf("\n\t Set %d : ",i);
      printf("\t X = %d ",MyPoints[i].x);
      printf("\t Y = %d ",MyPoints[i].y);
   }


   return 0;
}