/* This program shows the use of an 'enum' statements to make code
   more general. This is an 'OK' method but realise that it does
   mean that we need to recompile if we change a vlaue.
   
   This method is best used only for fixed constants (eg PI )   

   While this version acts the same as the previous, it is better
   as the compiler handles the 'enum'. Whereas the pre-processor
   deals with #defines (performing simple substitutions) this is done 
   no with little error checking, the 'enum' is dealt with by the 
   compiler which finds error more easily - hence more stable code.

*/
   
#include <stdio.h>
#include <stdlib.h>

enum ProblemSize { SIZE = 3 };          /* 'ProblemSize' is optional
                                        but a warning is generated is 
                                        it not specified */


int main(void)
{      
   int i,j;
   int iMatrix[SIZE][SIZE];
   int iCols = SIZE;
   int iRows = SIZE;
   
   for (i = 0 ; i < iCols ; i++ )
   {
     for (j = 0 ; j < iRows ; j++ )
     {
       iMatrix[i][j] = i+j;
       printf ("%2d ",iMatrix[i][j]);
     }
     printf ("\n");
   }
       
   return 0; 
} 