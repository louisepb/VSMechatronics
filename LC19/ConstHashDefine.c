#include <stdio.h>

//macro definition
#define X 30

//global integer constant
const int Y = 10;

int main()
{
	//local integer constant`
	const  int Z = 20;

	printf("Value of X: %d\n", X);
	printf("Value of Y: %d\n", Y);
	printf("Value of Z: %d\n", Z);

//	#undef X
//	#define X 300
//	printf("Value of X: %d\n", X);

//  Y = 30;

	return 0;
}
