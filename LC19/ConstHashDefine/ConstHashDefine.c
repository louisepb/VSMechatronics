#include <stdio.h>

//macro definition
#define X 30

//global integer constant
const int Y = 10;

void func();

int main()
{
	//local integer constant`
	const  int Z = 20;

	printf("Value of X: %d\n", X);
	printf("Value of Y: %d\n", Y);
	printf("Value of Z: %d\n", Z);

	func();

  	//Y = 30;
	Z = 40;

	return 0;
}

void func()
{
	int Z = 40;
	printf("Value of Z in function = %d\n", Z);
	//Y = 30;
}
