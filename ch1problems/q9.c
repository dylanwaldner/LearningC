#include <stdio.h>

int area(int x, int y);

int main(void){

	int x, y, area_val;

	printf("Enter the Height of the Rectangle: ");
	scanf("%d", &x);


	printf("Enter the Width of the Rectangle: ");
	scanf("%d", &y);

	area_val = area(x, y);

	printf("A rectangle with height %d and length %d has area %d and perimeter %d\n", x, y, area_val, 2 * x + 2 * y);

	return 0;
}


int area (int x, int y){

	return x * y;
}


