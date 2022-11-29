#include<stdio.h>

int main() {
	int x = 1025; // integer named x, is set to 1025 (00000000 00000000 00000100 00000001)
	int * int_p; // declaring a pointer (integer pointer named p)
	int_p = &x;	// p is set to the address of the x in the memory
	printf("address x (int_p)= %x, value x (*int_p) =  %i\n", int_p, *int_p);
	printf("address x (int_p+1)= %x, value x *(int_p+1) =  %i\n", int_p+1, *(int_p+1));

	char * char_p;
	char_p = (char*)int_p; // declare a character pointer. Casting char type to an int type. Char pointer is only one byte long so it only takes the first byte of the x's address which is the first byte (00000001)
	printf("address x (char_p)= %x, value x (*char_p) =  %i\n", char_p, *char_p);
	printf("address x (char_p+1)= %x, value x [*(char_p+1)] =  %i\n", char_p+1, *(char_p+1));

	return 0; 
} 
