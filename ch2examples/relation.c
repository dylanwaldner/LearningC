#include <stdio.h>

int main(void){

	int x = 3;

	printf("The value of x == 3 is %d. \n", x == 3);
	printf("The value of x != 3 is %d. \n", x != 3);

	printf("The value of 3x - 4 <= 3 is %d. \n", 3*x - 4 <= 3);
	printf("The value of x >= 3 is %d. \n", x >= 3);

	printf("The value of 2x %% 3 > 3 is %d. \n", 2 * x % 3 > 3);
	printf("The value of 25/2x < 3 is %d. \n", 25/(2*x) < 3);


	return 0;
}
