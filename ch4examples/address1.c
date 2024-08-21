#include <stdio.h>

int main(void){

	int intvar;

	printf("The values of intvar are stored in the memory");
	printf(" location %p.\n", (void*)&intvar);

	printf(" location %x.\n", (unsigned int)(uintptr_t)&intvar);  // Hexadecimal format
    	printf(" location %o.\n", (unsigned int)(uintptr_t)&intvar);  // O

	char charvar = 'A';
	printf("Address of charvar in pointer format: %p\n", (void*)&charvar);	
	printf("Address of charvar in hexadecimal: %lx\n", (unsigned long)(uintptr_t)&charvar);
    	printf("Address of charvar in octal: %lo\n", (unsigned long)(uintptr_t)&charvar);

	float floatvar = 3.14f;

    	printf("Address of floatvar in pointer format: %p\n", (void*)&floatvar);
    	printf("Address of floatvar in hexadecimal: %lx\n", (unsigned long)(uintptr_t)&floatvar);
    	printf("Address of floatvar in octal: %lo\n", (unsigned long)(uintptr_t)&floatvar);

	double doublevar = 3.14159;

    	printf("Address of doublevar in pointer format: %p\n", (void*)&doublevar);
    	printf("Address of doublevar in hexadecimal: %lx\n", (unsigned long)(uintptr_t)&doublevar);
    	printf("Address of doublevar in octal: %lo\n", (unsigned long)(uintptr_t)&doublevar);



	return 0;
}
