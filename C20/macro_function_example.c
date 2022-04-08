#include <stdio.h>  
#define MIN(a,b) ((a)<(b)?(a):(b))  

int main(void) 
{  
   printf("The minimum value of 10 and 20 is: %d\n", MIN(10,20));    
   return 0;
}