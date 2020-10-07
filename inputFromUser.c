#include <stdio.h>
#include <math.h>
#define pi acos(-1.0);

int main()
{
	int r;
	
	printf("Please enter the radius: ");
	scanf("%i", &r);
	
/* scanf("%d", &b);
The program will read in an integer value that the user enters on the keyboard (%d is for integers, as is printf, so b must be declared as an int) and place that value into b. */
	
	float area = r*r*pi;
	int x = area;
	printf("The circle's area is %f :)\n", area);
	printf("%i\n",x);
	
	return 0;
}
