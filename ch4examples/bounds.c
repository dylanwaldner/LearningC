#include <stdio.h>
#define MAX_INDEX 10


int main(void){
	int array[MAX_INDEX];
	int nextvar = 5;
	int i, num;

	char chararray;

	double dblarray;

	printf("array[10] location: %p, nextvar location: %p\n", (void *)&array, (void *)&nextvar);

	printf("nextvar is %d\n", nextvar);
	for (i = 0; i < 10; i++) {
		printf("Enter a number for index: \n");
		num = scanf("%d\n", &num);
		if (num < MAX_INDEX)
			array[num] = i;
	}

	printf("nextvar is now %d\n", nextvar);

	
	return 0;
}
