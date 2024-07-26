/* Exercise 1-9 in the book */

#include <stdio.h>
#include <stdlib.h>

int main (void){

	int a, b;

	printf("Enter a positive and a negative integer: ");
	printf("\nSeperate with a space.\n");
	scanf("%d %d", &a, &b);

	printf("a / b = %d\n", -(abs(a) / abs(b)));
	printf("a % b - %d\n", -(abs(a) % abs(b)));

	

	return 0;
}

