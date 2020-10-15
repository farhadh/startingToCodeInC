#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {
	/* pseudo random number generator.
	   This gets seeded and outputs a result.
	   Seed from the clock */
	  
	srand(time(NULL));
	int randNo = rand();
	
	printf("%i\n", randNo);

	return 0;
}
