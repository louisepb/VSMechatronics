#include <stdio.h>
#include <stdlib.h>

int main(void)
{
   	int age = 1;  			// Declare variable and initialise to 1
    
    while ( age != 0)	    // Loop as long as age is not zero
    {
        // Code in {} executed if condition is true (non-zero)
        
        printf ("\nPlease enter your age");
        scanf("%d", &age);
        printf ("You are %d years old\n", age);    
        
        // Code  now goes back and repeats the test with the value of age just entered
    }
    return 0;	// Exit code
}