#include <stdio.h>
#include <string.h>

int main()
{
	char firstWord[] = "Hello ";
	char secondWord[] = "World!";

	int lenFirst, lenSecond;             
	lenFirst = strlen(firstWord);
    	lenSecond = strlen(secondWord);

	char z[lenFirst+lenSecond+2];
	strcat(z,firstWord);
	strcat(z,secondWord);
	
	printf("Concatenated String: %s.\n", z);

	return 0;
}
