#include <stdio.h>

int main(void){
	int val, last, middle, first;

	printf("Enter an integer between 100 and 999: ");
	scanf("%d", &val);

	last = val / 100;

	val %= 100;

	middle = val / 10;

	val = val % 10;

	first = val;

	printf("Number in reverse is %d%d%d\n", first, middle, last);

	return 0;

}
