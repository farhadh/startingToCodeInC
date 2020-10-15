#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int i,j;
<<<<<<< HEAD
	
	for(i = 0; i<=10; i++){
=======

	for(i = 0; i<10; i++){
>>>>>>> 4f1f602... Nested for loops
		for(j=i; j>=0; j--){
			printf("%i ", j);
		}
		printf("\n");
	}

	return 0;
}
