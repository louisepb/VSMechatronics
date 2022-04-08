#include <stdio.h>  
#include <conio.h>  

#define DEBUG_ON 1  

int main(void) 
{  
#ifdef DEBUG_ON 
	printf("Debug mode - about to do something\n");  
#else  
	print("Running in standard mode");  
#endif         

return 0;
} 