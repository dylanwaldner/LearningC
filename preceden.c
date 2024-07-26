/* Exercise 1-10 from the book */

#include <stdio.h>
#include <stdlib.h>

int main (void){

	int a = 2, b = 3, c = 4, d, e;
	printf("a is %d, b is %d, c is %d, \n", a, b, c);
	d = a * -b + c;
	e = a * -(b + c);
	printf("d is %d, e i %d, \n", d, e);

	d = a + b * c;
	e = (a + b) * c;
	printf("d is %d, e is %d, \n", d, e);

	d = b % c + a;
	e = b % (c + a);
	printf("d is %d, e is %d, \n", d, e);

	d = c - b / a * a;
	e = (c - b) / (a * a);
	printf("d is %d, e is %d, \n", d, e);

	a = 4, b = 5, c = 2;

	d = a % b - 5;
	e = c - b * a;
	int f, g;
	f = c * c + b * a / 3;
	g = a - b - c * a % b;

	printf("i) %d\nii) %d\niii) %d\niv) %d\n", d, e, f, g);

	return 0;
}
