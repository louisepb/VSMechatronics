#include <stdio.h>
#include <stdlib.h>

// Main () - execution starts here
int main (void)
{
    // Declare variables
    int SampleData[10];
    int a=0;

    // Show initial value of a
    printf ("Values in a is %d \n", a);

    // Change an array item that IS NOT DEFINED
    SampleData[10] = 20;


    // See how thi affect the value in a
    printf ("Values in a is %d \n", a);

    // Note: we can retieive this 'invalid' value - it is however 'a' we are getting
    printf ("Values in SampleData[10] is %d \n", SampleData[10]);

    return (0);     // Exit indicating sucess
}