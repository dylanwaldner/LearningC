#include <stdio.h>

int main(void){

	int iochar;

	iochar = getchar();

	while (iochar != 9) {

		putchar(iochar);
		iochar = getchar();
	}

	return 0;
}
