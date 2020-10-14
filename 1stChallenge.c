#include <stdio.h>
#include <math.h>

int main()
{
	double a,b;

	printf("Please enter the length of the 1st side: ");
	scanf("%lf", &a);

	printf("Please enter the length of the 2nd side: ");
	scanf("%lf", &b);

	double c = sqrt(pow(a,2) + pow(b,2));
	printf("The length of the hypotenuse is %f.\n", c);

	return 0;
}
