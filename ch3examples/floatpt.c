#include <stdio.h>
#include <float.h>
int main(void){

	float floatvar;
	double doublevar;
	long double ldvar;

	printf("The number of bytes in a float is %lu.\n", sizeof(float));

	printf("The number of bytes in a double is %lu.\n", sizeof(double));

	printf("The number of bytes in a long double is %lu.\n", sizeof(long double));

	floatvar = 65.328f;

	printf("floatvar has the value of %7.2f.\n", floatvar);
	
	printf("It can also be written in the form %10.3e.\n", floatvar);

	printf("It can also be written in the form %10.3E.\n", floatvar);

	printf("It can also be written in the form %10.3g.\n", floatvar);


	doublevar = 1.2465e-5;

	printf("doublevar has the value %6.3f.\n", doublevar);

	printf("It can also be written in the form %7.5e.\n", doublevar);

	printf("It can also be written in the form %7.5E.\n", doublevar);

	printf("It can also be written in the form %7.5g.\n", doublevar);

	ldvar = 584.365E+17L;

	printf("ldvar has the value %7.2Lf.\n", ldvar);

	printf("It can also be written in the form %10.3Le.\n", ldvar);

	printf("It can also be written in the form %10.3LE.\n", ldvar);

	printf("It can also be written in the form %10.3Lg.\n", ldvar);
	
	

	return 0;

}
