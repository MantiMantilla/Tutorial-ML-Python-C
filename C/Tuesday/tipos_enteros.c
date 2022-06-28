#include <stdio.h> // standard input/output 
#include <limits.h> // integer specifications 

/* Rangos de varios tipos */
int main (void) {
    printf("Char range:\t%d\t%d\n", CHAR_MIN, CHAR_MAX);
    printf("Unsigned Char range:\t%d\t%u\n", 0, UCHAR_MAX);
    printf("Short range:\t%d\t%d\n", SHRT_MIN, SHRT_MAX);
    printf("Unsigned short range:\t%d\t%u\n", 0, USHRT_MAX);
    printf("Integer range:\t%d\t%d\n", INT_MIN, INT_MAX);
    printf("Unsigned int range:\t%d\t%u\n", 0, UINT_MAX);
    printf("Long range:\t%ld\t%ld\n", LONG_MIN, LONG_MAX);
    printf("Unsigned range:\t%ld\t%lu\n", (long)0, ULONG_MAX);
    printf("Long long range:\t%lld\t%lld\n", LLONG_MIN, LLONG_MAX);
    
    return 0;
}
