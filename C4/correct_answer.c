#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare and initialise as required
    int a = 1,b = 4;
    float ans;

    // Perform calculation 
    // This time a & b are  treated as if they are floats
    // the result of this float calculation is stored in ans
    ans = (float)a / (float)b;

    // Display answer
    printf ("\nThe answer is %f",ans);

    return 0;

}