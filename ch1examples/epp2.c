#include <stdio.h>


int main(void){

	int i, j;

	i = 2;
	j = 1;

	while ( (i > -5) || (j-- > 0) ) {
		if ( (j % 2) && (i-- % 3) )
			printf("if statement: %d", j);

		else
			printf("else statement: %d\n", i);


	}


	return 0;
}



