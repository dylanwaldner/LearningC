#include <stdio.h>

#define LAST 7

int main(void){

	int count, factorial, exponential;

	printf("Counting.\n");
	for (count = 1; count < LAST; count++)
		printf("%d\n", count);

	printf("\nCounting by Two\n");
	for (count = 0; count < 2 * LAST;)
		printf("%d\n", count += 2);

	printf("\nCalculating Factorials\n");
	for (factorial = 1, count = 1; count <= 7; factorial *= count++);

	printf("%d! is %d. \n\n", LAST, factorial);
		

	for (exponential = 1; exponential <= 512; exponential *= 2)
		printf("%d ", exponential);	

	printf("\n");

	for (exponential = 1; exponential <= 512; printf("%d ", exponential), exponential *= 2);

	for (count = 8; count >= 0; printf(" %d ", count--));

	return 0;
}
