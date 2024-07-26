#include <stdio.h>

int main(void){

	int i = 3, j = 0;

	printf("Examples of the logical expressions\n");
	printf("-----------------------------------\n");

	printf( "	i && j		%d\n", i && j);
	printf( "       i || j          %d\n", i || j);
	printf( "       !i          	%d\n", !i);
	printf( "       !j          	%d\n", !j);


	printf("i > 0 && j < 7      	%d\n", (i > 0) && (j < 7) );

	printf("i < 0 || j < 7          %d\n", (i < 0) || (j < 7) );

	printf("!(i > 5) || (j > 0)     %d\n", !(i > 5) || (j > 0) );

	printf("Examples of the effects on the variables\n");
	printf("-----------------------------------\n");
	printf("Initially, \ti = %d, \tj = %d\n", i, j);

	printf("i || ++j	%d,", i || ++j);
	printf("\ti = %d, \tj = %d\n", i, j);
	printf("i && j++	%d,", i && j++);
	printf("\ti = %d, \tj = %d\n", i, j);



	return 0;
}
