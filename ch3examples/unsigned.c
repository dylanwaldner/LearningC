#include <stdio.h>

int main(void){

	unsigned positive;
	int signedvar;
	unsigned long longer;

	printf("Unsigned\t Signed\n");
	printf("--------\t ------\n");

	positive = 4294967295;
	signedvar = 4294967295/2;	


	printf("  %6u\t   %6d\n", positive, signedvar);

	positive *= 2;
	signedvar *= 2;

	printf("  %6u\t   %6d\n", positive, signedvar);

	positive += 3;
	signedvar += 3;

	printf("  %6u\t   %6d\n", positive, signedvar);

	positive = 3147483647;
	signedvar = 2147483647;

	printf("  %6u\t   %6d\n", positive, signedvar);

	positive = 4 - 5;
	signedvar = 4 - 5;

	printf("  %6u\t   %6d\n", positive, signedvar);





	return 0;
}
