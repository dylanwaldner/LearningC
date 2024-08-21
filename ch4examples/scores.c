#include <stdio.h>

int main(void) {

	int test_scores[10];
	int i;

	printf("Please enter the ten scores now.\n");
	for (i = 300; i < 1000; i++) {
		printf("#%10d > ", i+1);
		scanf("%d", &test_scores[i]);

	}
	
	printf("Thank you.\n");


	return 0;
}
