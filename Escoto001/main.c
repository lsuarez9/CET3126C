#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Exercise 1: Data Type Sizes and Limits
    printf("=== Exercise 1: Data Type Sizes and Limits ===\n");

    // Declaring variables of different types
    int i;
    short s;
    long l;
    unsigned int ui;
    float f;
    double d;
    char c;

    // Printing size of each type
    printf("Size of int: %zu bytes\n", sizeof(i));
    printf("Size of short: %zu bytes\n", sizeof(s));
    printf("Size of long: %zu bytes\n", sizeof(l));
    printf("Size of unsigned int: %zu bytes\n", sizeof(ui));
    printf("Size of float: %zu bytes\n", sizeof(f));
    printf("Size of double: %zu bytes\n", sizeof(d));
    printf("Size of char: %zu bytes\n", sizeof(c));

    // Printing the minimum and maximum values for integer types
    printf("\nint min: %d, int max: %d\n", INT_MIN, INT_MAX);
    printf("short min: %d, short max: %d\n", SHRT_MIN, SHRT_MAX);
    printf("long min: %ld, long max: %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned int max: %u\n", UINT_MAX);

    // Printing the limits for floating point types
    printf("\nfloat min: %e, float max: %e\n", FLT_MIN, FLT_MAX);
    printf("double min: %e, double max: %e\n", DBL_MIN, DBL_MAX);

    printf("\n");

    // Exercise 2: Type Conversion
    printf("=== Exercise 2: Type Conversion ===\n");

    int intValue = 42;
    float floatValue = 3.14f;
    char charValue = 'A';

    // Implicit conversion: int to float
    float result1 = intValue;  // automatically converts int to float
    printf("Implicit conversion (int to float): %f\n", result1);

    // Explicit conversion: float to int
    int result2 = (int) floatValue;  // explicitly converting float to int
    printf("Explicit conversion (float to int): %d\n", result2);

    // Convert char to its ASCII integer value
    int asciiValue = (int) charValue;  // 'A' has ASCII value 65
    printf("ASCII value of '%c': %d\n", charValue, asciiValue);

    printf("\n");

    // Exercise 3: Integer Overflow and Precision Loss
    printf("=== Exercise 3: Integer Overflow and Precision Loss ===\n");

    // Unsigned int variable set to the largest possible value
    unsigned int uiMax = UINT_MAX;
    printf("Original unsigned int value: %u\n", uiMax);

    // Adding 1 causes an overflow (wraps around)
    uiMax += 1;
    printf("After adding 1 (overflow): %u\n", uiMax);

    // Showing precision loss with large float values
    float largeFloat = 1.0e20f;  // A very large float
    printf("Large float: %e\n", largeFloat);

    largeFloat += 1.0f;  // Adding 1 to a large float causes precision loss
    printf("Large float after adding 1: %e\n", largeFloat);

    printf("\n");

    // Exercise 4: Mixing Data Types in Math
    printf("=== Exercise 4: Mixing Data Types in Math ===\n");

    // Adding an int and a float
    float result3 = intValue + floatValue;
    printf("int + float: %f\n", result3);

    // Adding a char and an int
    int result4 = charValue + intValue;  // 'A' is converted to its ASCII value (65)
    printf("char + int: %d\n", result4);

    return 0;
}
