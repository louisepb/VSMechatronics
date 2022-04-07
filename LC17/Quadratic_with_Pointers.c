#include <stdio.h>
#include <stdlib.h>
#include <math.h>


// This function will return
//
//  0   if the equation can be solved,
//  -1  if it is not a quadratic
//  -2  if it is complex

int SolveQuadratic ( int a, int b, int c, float *x1, float *x2)
{
    int d;

    // If the equations is not a quadratic return -1
    if ( a == 0 )
        return (-1);

    // Calculate the value that will be square rooted
    d = (b*b) - (4*a*c);

    // If less than zero then it would be complex - give up!
    if ( d < 0 )
        return (-2);

    // If we got to here we are OK to solve things
    *x1 = (-b - sqrt(d)) / (2*a);
    *x2 = (-b + sqrt(d)) / (2*a);

    // This is are 'OK' return value
    return 0;

}

int main()
{
    int A,B,C, r;
    float X1, X2;

    printf ("Please enter a b & c separated by a space: ");

    scanf("%d %d %d",&A, &B, &C);

    r = SolveQuadratic(A,B,C, &X1, &X2);

    // The value returned lets us know if we have values in X1 and X2 we can use
    switch (r)
    {
    case 0 :
        printf ("The solutions are %f and %f", X1, X2 );
        break;
    case -1 :
        printf ("The equation provided was not a quadratic" );
        break;
    case -2 :
        printf ("The solutions had complex roots and could not be solved");
        break;
    }
    return 0;
}
