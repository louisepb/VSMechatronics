#include <stdio.h>
#include <stdlib.h>

void DisplayHelloWorld (void)
{
    static int k = 0;       // Counter for how many times the function is called

    printf ("Hello World\n");

    // Increment counter and display value
    k = k + 1;
    printf ("I have now said this %d times\n",k);
}
// Main () - execution starts here
int main (void)
{
    int i;

    // Loop calling out function 10 times
    for ( i =0 ; i < 10 ; i++ )
    {
        DisplayHelloWorld();
    }

    return (0);     // Exit indicating success
}