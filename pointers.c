#include<stdio.h>

int main() {
	int x = 10; // integer named x, is set to 10
	int* p; // declaring a pointer (integer pointer named p)

	p = &x;	// p is set to the address of the x in the memory


	printf("x is at memory address of %x\n", p);
	printf("p1 is %i\n", *p); // dereferencing the value
	
	*p = 20; // modifying value in a using pointer p (value at address being pointed by p, is set to 12)

	printf("x is at memory address of %x\n", p);
	printf("x is %i\n", x);
	printf("p2 is %i\n", *p);

	return 0; 
} 
