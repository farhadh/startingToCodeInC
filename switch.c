#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int x = 3;

	switch (x){
		case 1:
			printf("X is 1.\n");
			break;
		case 2:
			printf("X is 2.\n");
			break;
		
		default:
			printf("X is in its default value which is %i.\n", x);
			break;
		
	}


	return 0;
}
