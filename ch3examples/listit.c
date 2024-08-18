#include <stdio.h>

#define HIGHBIT 128
#define NOHIGHBIT 127
#define WP_LINEFEED 138
#define WP_CARRETURN 141

int main(void){

	int iochar;

	while ( ( iochar = getchar() ) != EOF ) {
		if (HIGHBIT & iochar) {
			if ( ( iochar == WP_LINEFEED ) ||
			     ( iochar == WP_CARRETURN ) ){

				putchar( iochar & NOHIGHBIT );
			}
		}
		else {
			putchar( iochar );
		}
	}

	return 0;
}

