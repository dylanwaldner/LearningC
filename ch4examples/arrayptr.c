#include <stdio.h>

int main(void){

	char demoarray[5] = {'D', 'E', 'M', 'O', '!'};

	char *demoptr = demoarray;
	
	int i;

	printf("demoarray is %p.\n", (void *)demoarray);

	printf("sizeof (demoarray) is %zu.\n", sizeof(demoarray));

	printf("sizeof( demoarray[0] ) is %zu.\n", sizeof(demoarray[0]));

	printf("\ndemoptr is %p.\n", demoptr);

	printf("sizeof(demoptr) is %zu.\n", sizeof(demoptr));

	printf("sizeof (*demoptr) is %zu.\n", sizeof(*demoptr));

	printf("\ni\tdemoarray[i]\t*(demoarray+i)\t*demoptr\n");
	printf("-\t-----------\t----------\t-----\n");

	for (i = 0; i < 5; i++, demoptr++)
		printf("%d\t	%c	\t	%c	\t	%c\n", 
			i, demoarray[i], *(demoarray + i), *demoptr);

	



	return 0;
}
