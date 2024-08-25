#include <stdio.h> 

int main(void) {

	char c, *ptr_c = &c;

	c = 'Q';

	printf("The value of c is %c.\n", c);

	printf("ptr_c points to %c.\n", *ptr_c);

	printf("The character %c is stored at address %p.\n", c, (void*)ptr_c);

	*ptr_c = 'r';

	printf("The value of c is now %c.\n", c);

	printf("ptr_c now points to %c.\n", *ptr_c);

	printf("The character %c is stored in hex %lx.\n", c, (unsigned long)(uintptr_t)ptr_c);

	c = 'A';

	printf("The value of c is %c.\n", c); 

        printf("ptr_c points to %c.\n", *ptr_c);

        printf("The character %c is stored at address %p.\n", c, (void*)ptr_c);

	*ptr_c = 'B';

	printf("The value of c is %c.\n", c); 

        printf("ptr_c points to %c.\n", *ptr_c);

        printf("The character %c is stored at address %p.\n", c, (void*)ptr_c);




	return 0;
}
