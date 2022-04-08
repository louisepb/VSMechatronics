#include <stdio.h>  
#include <conio.h>  

#define DEBUG_ON 1  

int main(void) 
{  
#if DEBUG_ON == 1
	printf("Debug mode - about to do something\n");  
#else  
	print("Running in standard mode");  
#endif  
	
	return 0;
}