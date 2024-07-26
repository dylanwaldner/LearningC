/* from example 1-12 from the book */

#include <stdio.h>
#include <stdlib.h>

int main(void){

	int int1 = 5, int2 = 7;
	int2 /= int2 - int1;
	int1 *= int1 + int2;
	printf("int1 = %d", int1);

	return 0;
}
