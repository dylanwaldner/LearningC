#include <stdio.h>

int main(void){

	char charvar;
	int intvar;

	printf("The sizeof type char is %lu byte(s). \n", sizeof(char));

	charvar = ',';

	printf("charvar is the character %c.\n", charvar);
	printf("It can be displayed in decimal as %d\n", charvar);
	printf("in octal as %o or \n", charvar);
	printf("in hexadecimal as %x. \n\n", charvar);

	intvar = 52;

	printf("Intvar is the decimal integer, %d.\n", intvar);
	printf("It can be written in hex, %x,\nor octal, %o, ", intvar, intvar);

	printf("or even treated as the character %c.\n", intvar);
	


	return 0;
}
