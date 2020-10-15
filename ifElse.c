#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

	double userScore;
	printf("On the scale of 1 to 10, how much do you like pizza? ");
	scanf("%lf", &userScore);

	if (userScore <= 4 ){
		printf("You don't really like pizza!\n");
	}
	else if (userScore >=5 && userScore <=7){
		printf("You're thoughts on pizza are eh!\n");
	}
	else if (userScore >= 7){
		printf("You love pizza!\n");
	}



	return 0;
}
