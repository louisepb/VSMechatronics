#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare an integer array and an integer pointer
    int MyArray[10];
    int *pI;
    int i;

    // Get the start address  by asking for the address iof array item [0]
    pI = &MyArray[0];       // or use: pI = MyArray;

    // Use loop to display values
    for ( i = 0 ; i < 10 ; i++ )
    {
        //  Set the value then use the increment operator to move the pointer
        //  to the next memory location. you can picture this as two steps: '
        //
        //      *pI = 5 + 4*i;
        //  then
        //      *pI++;

        *pI++ = 5 + 4*i;	// set value at index[i] to 5+4*i
    }

	// Display the values placed in the array
    for ( i = 0 ; i < 10 ; i++)
    {
        printf("%d ", MyArray[i]);
    }
    return 0;   // Exit
}