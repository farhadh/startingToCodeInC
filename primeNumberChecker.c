/*
The logic behind the square root of the number under the test:

If 𝑎.𝑏=𝑁 where 1 < 𝑎 ≤ 𝑏 < 𝑁
𝑁 = 𝑎.𝑏 ≥ 𝑎^2 ⟺  𝑎^2 ≤ 𝑁 ⟹  𝑎 ≤ √𝑁 
*/

#include <stdio.h>
#include <math.h>

int main() {
	int primeNumFlag,i;
	unsigned long inputNumber,remainder;
	printf("Please enter the number you'd like to know whether it's a prime number or not: ");
	scanf("%ld", &inputNumber);
	
	unsigned long highLimit = sqrt(inputNumber)+1;
	for(i=2; i<=highLimit;i++){
		remainder = inputNumber % i;
		if (inputNumber != 2 && remainder==0){
			primeNumFlag=0;
			break;
		}
		else if(inputNumber == 2 || remainder != 0){
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
