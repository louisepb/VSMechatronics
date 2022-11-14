#include <stdio.h>  
#include <conio.h>  

//#define DEBUG_ON 0

int main(void) 
{  
#ifdef DEBUG_ON 
	printf("Debug mode - about to do something\n");  
#else  
	printf("Running in standard mode");  
#endif         

return 0;
} 