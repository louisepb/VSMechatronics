#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int a;		    // Declare some variables
    float f;

    // Use printf to prompt the use to enter an integer
    printf ("Please enter an integer\n");
    
    // use scanf with %d to read into 'a' 
    scanf ("%d",&a);	// note the important & 
    
    // And display on the screen
    printf ("The value you entered for a is %d\n", a);
    
	// Use printf to prompt the use to enter an float
    printf ("Please enter a float\n");
    
    // use scanf with %f to read into 'f' 
    scanf ("%f",&f);  // note the important & 
    
    // And display on the screen
    printf ("The value you entered for f is %f\n", f);

    return 0;     // Exit from main
}