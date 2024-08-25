#include <stdio.h>

void changit( int x, int *y);

int main(void){

	int x, y, *int_ptr;

	x = 1;

	y = 3;

	int_ptr = &y;

	printf("In main before the call to changit,");

	printf("x = %d, y = %d, *int_ptr = %d\n", x, y, *int_ptr);

	changit(x, int_ptr);

	printf("In main after the call to changit,");
	printf(" x = %d, y = %d, *int_ptr = %d\n", x, y, *int_ptr);



	return 0;
}


void changit(int x, int *int_ptr){

	x += 5;
	*int_ptr += 5;

	printf("In changit, x = %d, *int_ptr = %d.\n", x, *int_ptr);

}





