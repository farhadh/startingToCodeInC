#include <stdio.h>

int main()
{
	char name[30+1];

	printf("Please enter your name: ");
	scanf("%s", name); /* The & doesn't apply when one is working with arrays */

	printf("The name is %s!\n", name);

	return 0;
}
