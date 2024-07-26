#include <stdio.h>

int main(void){

	short shortvar;
	long longvar;
	
	printf("An int has %zu bytes. \n", sizeof(int));
	printf("A long int has %zu bytes. \n", sizeof(longvar));
	printf("A short int has %zu bytes. \n", sizeof(shortvar));

	int j = 3;

	printf("the size of j++ is %zu\n", sizeof(j++));
	printf("the value of j is %d\n", j);



	return 0;
}
