#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    // Declare and populate an integer array
    int MyArray[10] = {2,4,6,8,10,12,14,18,20};
    
    // Declate an integer pointer
    int *pI;

    // Get the start address  by asking for the address iof array item [0]
    pI = &MyArray[0];

    // Or, use the fact the array name on its own is the start address of the array
    pI = MyArray;

    return 0;   // Exit
}