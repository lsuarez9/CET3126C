#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("LAB 2!\n\n");

    printf("Data Type Sizes and Limits\n");

    printf("1. Declares variables of types: int, short, long, unsigned int, float, double, char.");
    int a;
    short b;
    long c;
    unsigned int d;
    float e;
    double f;
    char g;

    printf("2. Uses the sizeof() function to print how many bytes each type uses.\n");

    printf("Size of int in bytes:%d\n", sizeof(a));
    printf("Size of short in bytes:%d\n", sizeof(b));
    printf("Size of long in bytes:%d\n", sizeof(c));
    printf("Size of unsigned int in bytes:%d\n", sizeof(d));
    printf("Size of float in bytes:%d\n", sizeof(e));
    printf("Size of double in bytes:%d\n", sizeof(f));
    printf("Size of char in bytes:%d\n\n", sizeof(g));

    printf("3. Uses the built-in limits from <limits.h> and <float.h> to show the smallest and largest values they can hold.\n");

    printf("Smallest and largest value of int:%d,%d\n", INT_MIN, INT_MAX);
    printf("Smallest and largest value of short:%d,%d\n", SHRT_MIN, SHRT_MAX);
    printf("Smallest and largest value of long:%d,%d\n", LONG_MIN,LONG_MAX);
    printf("Smallest and largest value of unsigned int:0,%d\n", UINT_MAX);
    printf("Smallest and largest value of float:%.10e,%.10e\n", FLT_MIN, FLT_MAX);
    printf("Smallest and largest value of double:%.10e,%.10e\n", DBL_MIN, DBL_MAX);
    printf("Smallest and largest value of char:%d,%d\n\n", CHAR_MIN, CHAR_MAX);

    printf("Type Conversion\n");

    printf("1. Converts an int to a float (implicit conversion)\n");

    int initialInt = 88;
    float varToFloat = initialInt;

    printf("Integer %d converted to float:%.2f\n", initialInt, varToFloat);

    printf("2. Converts a float to an int using (int) (explicit conversion)\n");

    float initialFlt = 77.7;
    int varToInt = (int)initialFlt;

    printf("Float %.2f converted to integer:%d\n", initialFlt, varToInt);

    printf("3. Converts a char (like 'A') to its ASCII integer value\n");

    char initialChar = 'A';
    int varToASCIIInt = initialChar;

    printf("Char %c to converted to ASCII integer:%d\n\n", initialChar, varToASCIIInt);

    printf("Integer Overflow and Precision Loss\n");

    printf("1. Creates an unsigned int variable and sets it to the biggest value (UINT_MAX)\n");

    unsigned int unsInt = UINT_MAX;

    printf("2. Adds 1 to it and prints the new value.\n");

    int unstIntPlusOne = unsInt + 1;

    printf("Biggest value of unsigned int plus 1:%d\n", unstIntPlusOne);

    printf("3. Shows how large float values lose precision (add 1.0 to a very large float like 1.0e20)\n");

    float fltBefore = 1.0e20;

    float fltAfter = fltBefore + 1.0;

    printf("Float before adding 1.0:%.10e\n", fltBefore);
    printf("Float after adding 1.0:%.10e\n\n", fltAfter);

    printf("Mixing Data Types in Math\n");

    printf("1. Adds an int and a float, and prints the result.\n");

    int num1 = 12;
    float numFloat = 34.34;
    float addNums = num1 + numFloat;
    printf("Integer %d and float %.2f added:%.2f\n", num1, numFloat, addNums);

    printf("2. Adds a char (like 'A') and an int, and prints the result.\n");

    char char1 = 'A';
    int num2 = 35;
    int addcharAndInt = char1 + num2;

    printf("Char c% and integer %d added: %d\n", char1, num2, addcharAndInt);

    return 0;
}
