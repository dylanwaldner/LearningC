/* exercise 1-11 from the book */

#include <stdio.h>
#include <stdlib.h>

int main (void){

	int f, c;

	printf("Enter a temperature in Fahrenheit: ");	
	scanf("%d", &f);

	c = 5/9 * (f - 32);

	printf("%d in Fahrenheit is %d in Celsius. \n", f, c);

	return 0;
}
