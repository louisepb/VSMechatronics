#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // Declare an integer array and an integer pointer
    int MyArray[10] = {2,4,6,8,10,12,14,16,18,20};
    int *pI;
    int i;

    // Get the start address  by asking for the address iof array item [0]
    pI = &MyArray[0];       // or use: pI = MyArray;

    // Use loop to display values
    for ( i = 0 ; i < 10 ; i++ )
    {
        printf ("Value at index %d (direct access to the arrays) is: %d\n", i, MyArray[i]);
        printf ("Value at index %d (access via the pointer) is: %d\n", i, pI[i]);
    }

    return 0;   // Exit
}