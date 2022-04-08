#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int SolveQuadraticEquation(float a, float b, float c, float *x1, float *x2)
{
    float d;    // For storing b^2 - 4*a*c

    if ( a == 0)    // Not a quadratie
    {
        return -1;
    }

    // calculate and store b*b-4*a*c for testing ans use later (if OK)
    d = b*b - 4*a*c;

    if ( d < 0 )
    {
        return -1;  // Complex
    }

    // If we have got to here, we can calculate x1 and x2
    *x1 = ( -b + sqrt (d)) / (2 * a);  // Note the use of the * before x1 & x2
    *x2 = ( -b - sqrt (d)) / (2 * a);  // to write to the relevant memory locations 

    // As we got here OK, return 0 to indicate all is OK
    return 0;
}

int main (void ) 
{
    float A,B,C,x1,x2;
    int retval;

    printf ("Please enter coefficients A,B and C separated by a space\n");
    scanf ("%f %f %f", &A, &B, &C);

    // Make use of the function
    retval = SolveQuadraticEquation(A, B, C, &x1, &x2);

    // Use the retval to determine if we can display the answers or an derror message
    if ( retval == -1 )
    {
        printf ("Not a quadratic\n");
    }
    else if (retval == -1)
    {
        printf ("The solution is complex - I cannot solve these\n");
    }
    else
    {
        printf("\nThe solutions are x1=%f, x2=%f", x1, x2);
    }
    return 0;   // exit
}