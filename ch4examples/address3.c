#include <stdio.h>

int main(void) {

	int intvar, added;
	int* ptr_to_intvar;

	char charvar, *char_ptr = &charvar;

	printf( "The value of ptr_to_intvar is %p.\n", ptr_to_intvar);

	ptr_to_intvar = &intvar;

	printf("The address of intvar is %p.\n", ptr_to_intvar);
	printf("The next value could be stored at %p.\n", ptr_to_intvar + 1);	

	printf("The address of charvar is %p.\n", char_ptr);
        printf("The next value could be stored at %p.\n", char_ptr + 1);

	added = char_ptr + ptr_to_intvar;

	return 0;
}
