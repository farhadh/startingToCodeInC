#include <stdio.h>
#include <math.h>

int main() {
	int primeNumFlag,i;
	unsigned long inputNumber,remainder,j;
	printf("Please enter the number up until which you'd like to see the prime numbers: ");
	scanf("%ld", &inputNumber);
	
	unsigned long highLimit;
	
	for (j=2;j<=inputNumber;j++){
		for(i=2; i<=sqrt(j)+1;i++){
			remainder = j % i;
			if (j != 2 && remainder==0){
				primeNumFlag=0;
				break;
			}
			else if(j == 2 || remainder != 0){
				primeNumFlag=1;
			}
		}
		
		if(primeNumFlag==1){
			printf("%lu\n", j);
		}

	}

	
	return 0;
}
