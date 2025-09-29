#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {
    //printf("Hello, World!\n");

    //exercise 1:
    //Declares variables of types: int, short, long, unsigned int, float, double, char.
    int a;
    short b;
    long c;
    unsigned int d;
    float e;
    double f;
    char g;

    //Uses the sizeof() function to print how many bytes each type uses.
    printf("Size of int: %zu bytes\n", sizeof(a));
    printf("Size of short: %zu bytes\n", sizeof(b));
    printf("Size of long: %zu bytes\n", sizeof(c));
    printf("Size of unsigned int: %zu bytes\n", sizeof(d));
    printf("Size of float: %zu bytes\n", sizeof(e));
    printf("Size of double: %zu bytes\n", sizeof(f));
    printf("Size of char: %zu bytes\n", sizeof(g));
    
    //Uses the built-in limits from <limits.h> and <float.h> to show the smallest and largest values they can hold.
    printf("Limits for int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Limits for short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Limits for long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Limits for unsigned int: 0 to %u\n", UINT_MAX);
    printf("Limits for float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Limits for double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Limits for char: %d to %d\n", CHAR_MIN, CHAR_MAX);

    return 0;
}