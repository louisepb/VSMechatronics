#include <stdio.h>

int main(void)
{
    // Declare some variables
    int a,b,c;
    float f,g;

    // Use printf to prompt the use to enter 3 integers
    printf ("Please enter three integer\n");
    
    // use scanf with %d to read into a, b and c
    scanf ("%d %d %d",&a, &b, &c);	// note the important & 
    
    // And display on the screen
    printf ("The values entered were %d %d %d\n", a, b, c);
    
	// Use printf to prompt the use to enter an float
    printf ("Please enter two floats\n");
    
	// use scanf with %f to read into f ang g
    scanf ("%f %f",&f, &g);  // note the important & 
    
	// And display on the screen
    printf ("The value you entered were %f and %f \n", f,g);
    
    return 0;	// Exit from main
}