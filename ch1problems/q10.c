#include <stdio.h>

int main(void){
	int val;

	printf("Enter a decimal integer: ");
	scanf("%d", &val);

	printf("%d decimal is %o octal and %x hexadecimal\n", val, val, val);

}
