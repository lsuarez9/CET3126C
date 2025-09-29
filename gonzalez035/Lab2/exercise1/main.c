#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
    //Exercise 1
    //Declare variables of type int, short, long, unsigned int, float, double, and char
    int a;
    short b;
    long c;
    unsigned int d;
    float e;
    double f;
    char g;


    //Use the sizeof() function to print how many bytes each type uses.
    printf("Int has %zu bytes\n", sizeof(a));
    printf("Short has %zu bytes\n", sizeof(b));
    printf("Long has %zu bytes\n", sizeof(c));
    printf("Unsigned int has %zu bytes\n", sizeof(d));
    printf("Float has %zu bytes\n", sizeof(e));
    printf("Double has %zu bytes\n", sizeof(f));
    printf("Char has %zu bytes\n", sizeof(g));



    //Use the built-in limits from <limits.h> and <float.h> to show the smallest and largest values they can hold
    printf("Int limits: %d to %d\n", INT_MIN, INT_MAX);
    printf("Short limits: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Long limits: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Unsigned int limits: 0 to %u\n", UINT_MAX);
    printf("Float limits: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("Double limits: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("Char limits: %d to %d\n", CHAR_MIN, CHAR_MAX);


    return 0;
}
