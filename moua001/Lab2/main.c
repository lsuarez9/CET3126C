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

    //exercise 2:
    //Converts an int to a float (implicit conversion)
    int intValue = 42;
    float floatValue = intValue;
    printf("Implicit conversion from int to float: %d to %f\n", intValue, floatValue);

    //Converts a float to an int using (int) (explicit conversion)
    floatValue = 42.99f;
    intValue = (int)floatValue;
    printf("Explicit conversion from float to int: %f to %d\n", floatValue, intValue);

    //Converts a char (like 'A') to its ASCII integer value
    char charValue = 'A';
    int asciiValue = (int)charValue;
    printf("Conversion from char to ASCII int: %c to %d\n", charValue, asciiValue);

    //exercise 3:
    //Creates an unsigned int variable and sets it to the biggest value (UINT_MAX)
    unsigned int unsignedIntValue = UINT_MAX;
    printf("Unsigned int max value: %u\n", unsignedIntValue);

    //Adds 1 to it and prints the new value (it should "wrap around" to 0)
    unsignedIntValue += 1;
    printf("After adding 1: %u\n", unsignedIntValue);

    //Shows how large float values lose precision (add 1.0 to a very large float like 1.0e20)
    float largeFloat = 1.0e20f;
    printf("Large float value before: %e\n", largeFloat);
    largeFloat += 1.0f;
    printf("After adding 1.0: %e\n", largeFloat);

    //exercise 4:
    //Adds an int and a float, and prints the result.
    int intValue = 5;
    float floatValue = 10.5f;
    float result = intValue + floatValue;
    printf("Result of adding int and float: %d + %f = %f\n", intValue, floatValue, result);

    //Adds a char (like 'A') and an int, and prints the result.
    char charValue = 'A';
    int intValue2 = 5;
    int charIntResult = charValue + intValue2;
    printf("Result of adding char and int: %c + %d = %d\n", charValue, intValue2, charIntResult);

    //Explain what happens. (C automatically converts to a larger type when mixing types.)
    printf("Explanation: When adding different types, C promotes the smaller type to the larger type to prevent data loss.\n");

    return 0;
}