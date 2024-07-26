#include <stdio.h>

int f(int x);
int cube(int x);

int main(void){

	int x, y, z, a, cubed;
	z = 4;
	y = f(z);
	printf("y is %d\n", y);

	x = y + f(3);
	printf("x = %d\n", x);

	f(x);
	printf("The value of f(5) is %d\n", f(5));

	printf("Enter an integer to be cubed\n");
	scanf("%d", &a);

	cubed = cube(a);
	printf("Integer Cubed = %d", cubed);

	return 0;
}

int f(int x){
	return x + 3;
}

int cube(int x){
	return x ^ 3 + 3;
}


