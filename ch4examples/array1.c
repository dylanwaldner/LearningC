#include <stdio.h>

#define NUMCHARS 10
#define NUMFLOATS 8

int main(void){

	char chararray[NUMCHARS];
	int intarray[] = {2, 1, 3, 5, 4, 8, 3, 7};
	double dblarray[NUMFLOATS] = {1.2, 3.4, -2.3, 1.4, 4.5};
	int index;

	for (index = 0; index < NUMCHARS; index++)
		chararray[index] = 127 - index;

	printf("chararray accupies %lu bytes.\n", sizeof( chararray ) );

	printf("intarray accupies %lu bytes.\n", sizeof( intarray ) );

	printf("dblarray accupies %lu bytes.\n", sizeof( dblarray ) );


	printf( "The element in chararray with index 3 is '%c'.\n", chararray[3] );

	printf( "The element in intarray with index 3 is %d.\n", intarray[3] );

	printf( "The element in dblarray with index 6 is %5.2f\n", dblarray[3]);

	intarray[7] = 24;

	printf("%d", intarray[7]);


	return 0;
}
