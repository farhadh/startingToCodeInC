#include <stdio.h>
#include <math.h>

int main() {
	int primeNumFlag,i;
	unsigned long inputNumber,remainder;
	printf("Please enter the number you'd like to know whether it's a prime number or not: ");
	scanf("%ld", &inputNumber);
	
	unsigned long highLimit = sqrt(inputNumber);
	for(i=2; i<=highLimit+1;i++){
		remainder = inputNumber % i;
		if (remainder==0){
			primeNumFlag=0;
			break;
		}
		else if(remainder != 0){
			primeNumFlag=1;
		}
	}
	
	if(primeNumFlag==1){
		printf("The number IS prime\n");
	}
	else if (primeNumFlag==0){
		printf("The number is NOT prime\n");
	}

	
	return 0;
}
