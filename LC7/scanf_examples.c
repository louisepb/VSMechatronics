/* Chapter 7 : Examples of using scanf */

/* A program to show how to use scanf to read various types of values (float/integer)*/

#include <stdlib.h>
#include <stdio.h>


int main( void )
{

  int v1;                       /* An integer */
  float fv;                     /* A float */


  /* Reading an integer */
  printf("\nPlease enter an integer and press return ");
  scanf("%d",&v1);
  printf("\nThe value you entered was %d ",v1);

  /* Reading a floating point number */
  printf("\nPlease enter a floating point number & press return ");
  scanf("%f",&fv);
  printf("\nThe value you typed in was %f ",fv);


  /* Reading all three in one go */
  printf("\nPlease enter your age and salary\n");
  scanf("%d %f", &v1, &fv);

  printf("\nYou are %d years old ",v1);
  printf("\nAnd earn %f per year ",fv);

  return 0;     /* End of the program   */

}
