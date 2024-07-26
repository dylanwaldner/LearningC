/* Example 1-8 from the book */

#include <stdio.h>

int main (void){
	int a, b, c, d;
	printf("Enter an Integer here: ");
	scanf("%d", &a);

	b = a + 4;
	c = a - 3;
	d = -a;
	printf("b is %d, c is %d, d is %d. \n\n", b, c, d);	

	b = a * 3;
	c = a / 3;
	d = a % 3;
	printf("b is %d, c is %d, d is %d. \n\n", b, c, d);

	return 0;
}	
