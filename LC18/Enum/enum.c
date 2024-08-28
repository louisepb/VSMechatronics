#include <stdio.h>
#include <stdlib.h>

int main(void)
{
 
	 /* Set up our enumerated type */
	 enum Days { Mon, Tue, Wed, Thu, Fri, Sat, Sun };
	 
	 /* If we wish, we can set the base level */
	 //enum Days { Mon = 1 , Tue, Wed, Thu, Fri, Sat, Sun };
									
	 /* Create a variable that can take values of this type */
	 enum Days DOW;

	 /* Set variable equal to one of these days */ 
	 DOW = Sun;
	 
	 /* And print the assigned value */ 
	 printf ("\nThe value assigned to Sun is %d ",DOW);

  
 return 0;
}