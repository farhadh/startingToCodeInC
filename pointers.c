#include<stdio.h>

int main() {
	int x = 10;
	int *p; // declaring a pointer

	p = &x;	// assigning value to the pointer

	printf("x1 is %i\n", x);
	printf("p1 is %i\n", *p); // referencing the value
	
	*p = 20;

	printf("x2 is %i\n", x);
	printf("p2 is %i\n", *p);

	return 0; 
} 
