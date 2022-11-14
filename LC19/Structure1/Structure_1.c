
#include <stdio.h>
#include <stdlib.h>

struct DataSet			/* Define a struture called DataSet */
{
	int x;			/* The X data */
	int y;			/* The Y data */
};


int main(void)
{

   struct DataSet	MyPoints;	/* Define structure, type DataSet */

   MyPoints.x = 1;
   MyPoints.y = 2;

   printf("\nThe dataset values are ");
   printf("\n\t\t X = %d ",MyPoints.x);
   printf("\n\t\t Y = %d ",MyPoints.y);



   return 0;
}