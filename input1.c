/* Example 1-6 in the book */

#include <stdio.h>

int main (void){
	int intvar;
	int intvar2;
	printf("the value of intvar is %p. \n", &intvar);
	printf("the address of intvar2 is %p. \n", &intvar2);
	printf("\n\tEnter an Integer value: ");
	scanf("%d", &intvar);
	printf("The value of intvar is %d. \n", intvar);
	return 0;
}
