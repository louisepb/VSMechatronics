#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Ddeclare variable and initialise to 1
    int i;

    // Count up from 1 to 100 in steps of 1
    // Note the test could also be: i <= 100
    for ( i = 0 ; i < 101 ; i++ )
    {
        printf ("The value of i is %d\n",i);
    }

    // Count down form 10 to zero
    // Note: we could also use the test: i != 0
    for ( i = 10 ; i >= 0 ; i-- )
    {
        printf ("The value of i is %d\n",i);
    }

    // Count up from 1 to 100 in steps of 3
    // Note the test could also be: i <= 100
    // Increement could also be written as i+=3
    for ( i = 0 ; i < 101 ; i=i+1 )
    {
        printf ("The value of i is %d\n",i);
    }
    return 0;
}