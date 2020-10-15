#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

	double r;
	printf("Do you love pizza?\n1: Yes\n0: No\nYour choice: ");
	scanf("%lf", &r);


	if ((bool) r) {
		printf("Welcome to my pizza app!\n");
	}


	return 0;
}
