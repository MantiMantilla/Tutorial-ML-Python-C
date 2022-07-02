#include <stdio.h> // standard input/output  
#include <float.h> // floating-point specifications 

/* Rangos de varios tipos */
int main (void) {
    // Floating point
    printf("Float range:\t%e\t%e\n", FLT_MIN, FLT_MAX);
    printf("Double range:\t%e\t%e\n", DBL_MIN, DBL_MAX);
    printf("Long double range:\t%Le\t%Le\n", LDBL_MIN, LDBL_MAX);
}
