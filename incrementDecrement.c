#include <stdio.h>

int main()
{
	int x = 123;
	
	int output = ++x; /* unary operator if you would like to have the incremented number of x assigned to the out put, then ++ should come first, otherwise the x get increased by one after it got assigned to the output variable */

	/*
	   x -= 10;
	   x += 10;
	   x /= 10;
	   x %=10;
	*/

	printf("%i\n", output);


	return 0;
}
