#include <stdio.h>
#include <stdlib.h>

#define BUILD1 23
 
int main(void)
{

 int MyValue = 0;
 
 printf ("\nThis code is common to all ");

#ifdef BUILD1  

 printf ("\nWe had BUILD1 defined, will adjust value accordingly  ");
 MyValue = BUILD1;

#else

 printf ("\nBUILD1 was not defined, leaving MyValue alone ");

#endif

  printf  ("\nThe value in MyValue is %d ",MyValue);
  printf ("\n\n");

  return 0;

}
