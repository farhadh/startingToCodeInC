#include <stdio.h>

int main()
{
	double userData;
	printf("Please enter your number: ");
	scanf("%lf", &userData);
	printf("%f\n%g\n%e\n", userData, userData, userData);
	return 0;
}
