#include <stdio.h>
#include <float.h> // Include the float.h header for floating-point limits and properties

int main() {
    // Print the number of decimal digits of precision
    printf("FLT_DIG: %d\n", FLT_DIG);
    printf("DBL_DIG: %d\n", DBL_DIG);
    printf("LDBL_DIG: %d\n", LDBL_DIG);

    // Print the minimum exponent
    printf("FLT_MIN_EXP: %d\n", FLT_MIN_EXP);
    printf("DBL_MIN_EXP: %d\n", DBL_MIN_EXP);
    printf("LDBL_MIN_EXP: %d\n", LDBL_MIN_EXP);

    // Print the minimum exponent for base 10
    printf("FLT_MIN_10_EXP: %d\n", FLT_MIN_10_EXP);
    printf("DBL_MIN_10_EXP: %d\n", DBL_MIN_10_EXP);
    printf("LDBL_MIN_10_EXP: %d\n", LDBL_MIN_10_EXP);

    // Print the maximum exponent
    printf("FLT_MAX_EXP: %d\n", FLT_MAX_EXP);
    printf("DBL_MAX_EXP: %d\n", DBL_MAX_EXP);
    printf("LDBL_MAX_EXP: %d\n", LDBL_MAX_EXP);

    // Print the maximum exponent for base 10
    printf("FLT_MAX_10_EXP: %d\n", FLT_MAX_10_EXP);
    printf("DBL_MAX_10_EXP: %d\n", DBL_MAX_10_EXP);
    printf("LDBL_MAX_10_EXP: %d\n", LDBL_MAX_10_EXP);

    // Print the maximum representable finite floating-point numbers
    printf("FLT_MAX: %e\n", FLT_MAX);
    printf("DBL_MAX: %e\n", DBL_MAX);
    printf("LDBL_MAX: %Le\n", LDBL_MAX);

    // Print the difference between 1 and the smallest value greater than 1
    printf("FLT_EPSILON: %e\n", FLT_EPSILON);
    printf("DBL_EPSILON: %e\n", DBL_EPSILON);
    printf("LDBL_EPSILON: %Le\n", LDBL_EPSILON);

    // Print the smallest normalized positive floating-point numbers
    printf("FLT_MIN: %e\n", FLT_MIN);
    printf("DBL_MIN: %e\n", DBL_MIN);
    printf("LDBL_MIN: %Le\n", LDBL_MIN);

    return 0;
}

