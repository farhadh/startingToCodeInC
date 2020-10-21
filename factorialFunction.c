#include <stdio.h>

unsigned long myFunc(unsigned long num){
	unsigned long factorial = 1;
	for(int i=2; i<=num; i++){
		factorial *= i;	
	}

	return factorial;

}


int main(){
	unsigned long a;
	printf("Please enter the number: ");
	scanf("%lu", &a);

	printf("%lu\n", myFunc(a));

	return 0;

}
