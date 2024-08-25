#include <stdio.h>

void switchxz (int *z, int *x);

int main(void){

	int x, y, z, *x_pointer, *z_pointer;

	x = 5;
	y = 4;
	z = 7;

	x_pointer = &x;
	z_pointer = &z;
	printf("*x_pointer = %d, z_pointer = %d\n", *x_pointer, *z_pointer);
	printf("1: y is %d, x is %d, and z is %d.\n", y, x, z);

	switchxz(z_pointer, x_pointer);

	printf("2: y is %d, x is %d, and z is %d.\n", y, x, z);

	return 0;
}


void switchxz (int *z_pointer, int *x_pointer){
	int placeholder = *z_pointer;

	*z_pointer = *x_pointer;
	*x_pointer = placeholder;	
}
