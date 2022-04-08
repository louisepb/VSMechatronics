#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    // Declare an integer array and an integer pointer
    int MyArray[10] = {2,4,6,8,10,12,14,16,18,20};
    int *pI;

    // Get the start address  by asking for the address iof array item [0]
    pI = &MyArray[0];   // Or use:     pI = MyArray;

    // Display the 1st item in the array, first be accessing rhe array
    printf("The value at array item [0] is %d\n", MyArray[0]);

    // Since the pointer points to the address of the 1st item we can
    // access it as we would for a pointer pointing to any single variable
    
    printf("The value at the memory address held in pI is %d\n", *pI);

    return 0;   // Exit
}