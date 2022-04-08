#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int age ;  	// Declare variable, no need to initialise this time 
				// as the test condition is not based on its value
    
    // This is always non-zero, the loop will never break
    while ( 1 )
    {
        // Code in {} executed if condition is true (non-zero)
        
        printf ("\nPlease enter your age");
        scanf("%d", &age);
        printf ("You are %d years old\n", age);    
        
        // Code  now goes back and repeats 
        // as the conditions is always non-zero (true)
    }
    
    return 0;	// Exit code
}