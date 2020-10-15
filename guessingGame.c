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

	// How about generating a number in a range? ;)

	int maxValue = 5;
	int rangedRandNo = randNo % maxValue+1;
	
	printf("Guess number between 0 – %i: ", maxValue);

	int input;
	scanf("%d", &input);
	
	printf("The ranged random number is %i.\n",rangedRandNo);

	if (input == rangedRandNo){
		printf("You guessed correctly!\n");
	}
	else{
		printf("You didn't guess right. Try again!\n");
	}

	return 0;
}
