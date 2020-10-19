#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool isPrime(int inputNumber){
	int i;
	unsigned long remainder;
	bool primeNum;
	unsigned long highLimit = sqrt(inputNumber)+1;
	for(i=2; i<=highLimit;i++){
		remainder = inputNumber % i;
		//printf("i is %i.\nremainder is %lu.\n", i, remainder);
		if (inputNumber != 2 && remainder==0){
			primeNum = false;
			break;
		}
		else if(inputNumber == 2 || remainder != 0){
			primeNum = true;
		}
	}

	return primeNum;
}

int main() {
	unsigned long inputNumber;

	printf("Please enter the number you'd like to know whether it's a prime number or not: ");
	scanf("%ld", &inputNumber);

	bool primaryCheck = isPrime(inputNumber);

	printf("%i\n", primaryCheck);
	if(primaryCheck){
		printf("IS prime!\n");
	}
	else if (!primaryCheck){
		printf("NOT prime!\n");

	}

	return 0;
}
