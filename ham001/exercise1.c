#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Declare variables of different types
    int intVar;
    short shortVar;
    long longVar;
    unsigned int unsignedVar;
    float floatVar;
    double doubleVar;
    char charVar;
    
    printf("=== Data Type Sizes and Limits ===\n\n");
    
    // Print sizes using sizeof()
    printf("Size of int: %lu bytes\n", sizeof(intVar));
    printf("Size of short: %lu bytes\n", sizeof(shortVar));
    printf("Size of long: %lu bytes\n", sizeof(longVar));
    printf("Size of unsigned int: %lu bytes\n", sizeof(unsignedVar));
    printf("Size of float: %lu bytes\n", sizeof(floatVar));
    printf("Size of double: %lu bytes\n", sizeof(doubleVar));
    printf("Size of char: %lu bytes\n\n", sizeof(charVar));
    
    // Print limits from limits.h and float.h
    printf("--- Integer Type Limits ---\n");
    printf("int range: %d to %d\n", INT_MIN, INT_MAX);
    printf("short range: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("long range: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned int range: 0 to %u\n", UINT_MAX);
    printf("char range: %d to %d\n\n", CHAR_MIN, CHAR_MAX);
    
    printf("--- Floating Point Type Limits ---\n");
    printf("float range: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double range: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("float precision: %d decimal digits\n", FLT_DIG);
    printf("double precision: %d decimal digits\n", DBL_DIG);
    
    return 0;
}