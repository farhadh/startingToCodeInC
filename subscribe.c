#include <stdio.h>

int main()
{
	int x = 0xA;
	
	printf("This is x: %i\n", x);
	
	int y = x / 2;

	printf("%i\n",0xa); // "%i" works with both decimal and hex integers
	printf("I just created a variable %d and %d\n", x, y);

	return 0;
}
