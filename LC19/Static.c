/* 
  Static variables - a variable that is created when a function is first
  called and remains until the program terminates 
  
  This is to say that in future calls to the function it is not redefined 
  and can take the value it last had in the function.
  
  This should hopefully show this !
*/   

#include <stdio.h>
#include <stdlib.h>
 
void NonStaticFunction(void)
{
  int i =0 ;    /* This is issued EVERY time the function is called */
  i = i + 1;
  printf ("\nIn Non static function, the value of i is %d ",i);
  return;
}

void StaticFunction(void)
{
  static int i =0 ;  /* This is issued THE FIRST TIME, 
                        AND ONLY THE FIRST TIME
                        that the function is called */
  i = i + 1;
  printf ("\nIn *static* function, the value of i is %d ",i);
  return;
}


int main(void)
{

  int i;
  for ( i = 0 ; i < 10 ; i++ )
  {
    NonStaticFunction();
    StaticFunction();
  }
  
  return 0;
}
    