#include <stdio.h>

int main()
{
	char ASCII;

	printf("Please enter your character: ");
	scanf("%c", &ASCII);
	printf("%i\n", ASCII);

	int integer;
	printf("Please enter an intger between 0 - 127: ");	
	scanf("%i", &integer);

	printf("%c\n", integer);
	

	return 0;
}
