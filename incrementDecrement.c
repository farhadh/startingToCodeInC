#include <stdio.h>

int main()
{
	int i;
	double x[4];
	for(i=0;i<4;i++)
	{
		x[i]=123;
	}

	/* int output = ++x; – unary operator if you would like to have the incremented number of x assigned to the out put, then ++ should come first, otherwise the x get increased by one after it got assigned to the output variable */



	/* int output = ++x; – unary operator if you would like to have the incremented number of x assigned to the out put, then ++ should come first, otherwise the x get increased by one after it got assigned to the output variable */

	x[0] -= 10;
	x[1] += 10;
	x[2] /= 10;
	x[3] = (int) x[3] % 10;

	for(i=0;i<4;i++)
	{
		printf("%f\n", x[i]);
	}


	return 0;
}
