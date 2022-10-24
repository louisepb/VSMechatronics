#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare some variables
    int a = 123;
    float f = 12.456f;

    // Use printf display text on the screen
    printf ("Examples of integer formatting\n");
    printf ("a = %d (no modifier)\n", a);
    printf ("a = %6d (w:6, justify:right)\n", a);
    printf ("a = %-6d (w:6 )\n", a);

    // Use printf display text on the screen
    printf ("Examples of float formatting\n");
    printf ("f = %f (no modifier)\n", f);
    printf ("f = %6.2f (w:6, 2dp, justify:right)\n", f);
    printf ("f = %-6.1f (w:6, 1dp)\n", f);

    // Exit from main
    return 0;
}