#include<stdio.h>

struct rectangle{
	int length, width;

};

struct position{	
	int x, y;

};

struct building{
	char owner[50];
	struct rectangle myPlan;
	struct position address;
	
};

int main() {
	struct building myBuilding = {"Farhad", {5, 10},{65465, 879}};
	printf("The house is %i by %i, located on %i and %i, and owned by %s.\n",
		myBuilding.myPlan.length,
		myBuilding.myPlan.width,
		myBuilding.address.x,
		myBuilding.address.y,
		myBuilding.owner);

	return 0; 
} 
