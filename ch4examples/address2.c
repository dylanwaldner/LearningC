#include <stdio.h>

int main(void) {

	int intvar;
	int* ptr_to_intvar;

	printf( "The value of ptr_to_intvar is %p.\n", ptr_to_intvar);

	ptr_to_intvar = &intvar;

	printf("The address of intvar is %p.\n", &intvar);
	printf("The value of ptr_to_int is %p.\n", ptr_to_intvar);	


	return 0;
}
