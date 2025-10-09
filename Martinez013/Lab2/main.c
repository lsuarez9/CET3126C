#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Hello world!\n");

    ///Exercise 1: Data type size and Limits///////////////////////

    ///Declares variables of types: int, short, long, unsigned int, float, double, char.//////////////////////////
    int i;
    short s;
    long l;
    unsigned int ui;
    float f;
    double d;
    char c;

    ///Uses the sizeof() function to print how many bytes each type uses.///////////////////
    printf("size of data types: \n");
    printf("size of int: %d bytes\n", sizeof(i));
    printf("size of short: %d bytes\n", sizeof(s));
    printf("size of long: %d bytes\n", sizeof(l));
    printf("size of unsigned int: %d bytes\n", sizeof(ui));
    printf("size of float: %d bytes\n", sizeof(f));
    printf("size of double: %d bytes\n", sizeof(d));
    printf("size of char: %d bytes\n", sizeof(c));

    ///Uses the built-in limits from <limits.h> and <float.h> to show the smallest and largest values they can hold.//////////////
    printf("\nLimits of data types: \n");
    printf("int: Min = %d, Max = %d\n", INT_MIN, INT_MAX);
    printf("short: Min = %d, Max = %d\n", SHRT_MIN, SHRT_MAX);
    printf("long: Min = %d, Max = %d\n", LONG_MIN, LONG_MAX);
    printf("unsigned int: Min = %u, Max = %u\n", UINT_MAX);
    printf("float: Min = %f, Max = %f\n", FLT_MIN, FLT_MAX);
    printf("double: Min = %f, Max = %f\n", INT_MIN, INT_MAX);
    printf("char: Min = %d, Max = %d\n", CHAR_MIN, CHAR_MAX);

    ///Exercise 2: Type Conversion////////////////////////////

    ///Converts an int to a float (implicit conversion)//////////////////
    int int_value = 15;
    float float_value = int_value;
    printf("Conversion: %d to %f\n", int_value, float_value);

    ///Converts a float to an int using (int) (explicit conversion)//////////////////
    float floatvalue = 10.5;
    int intvalue = (int)floatvalue;
    printf("Conversion: %f to %d\n", floatvalue, intvalue);

    ///Converts a char (like 'A') to its ASCII integer value//////////////////////////
    char char_value = 'C';
    int ascii_value = (int)char_value;
    printf("Conversion: %c to %d\n", char_value, ascii_value);

    ///Exercise 3: Integer Overflow and Precision Loss////////////////

    ///Creates an unsigned int variable and sets it to the biggest value (UINT_MAX)/////////////
    unsigned int variable = UINT_MAX;
    printf("size of unsigned int variable: %u\n", variable);

    ///Adds 1 to it and prints the new value (it should "wrap around" to 0)
    variable += 1;
    printf("size of unsigned int after adding: %u\n");

    ///Shows how large float values lose precision (add 1.0 to a very large float like 1.0e20)/////////////
    float variable2 = 1.0e20;
    printf("Before adding: %e\n", variable2);
    variable2 += 1.0;
    printf("After adding: %e\n", variable2);

    ///Exercise 4: Mixing Data Types in Math/////////////////

    ///Adds an int and a float, and prints the result.////////////////
    int var1 = 10;
    float var2 = 20.10;
    float var3 = var1 + var2;
    printf("Result after adding with float: %f\n", var3);

    ///Adds a char (like 'A') and an int, and prints the result.///////////
    char var4 = 'D';
    int var5 = 30;
    int var6 = var4 + var5;
    printf("Result after adding with char: %d\n", var6);
    ///When an int and float are added the result will be a float/////////
    ///When an  char and int are added the result will be a int//////


    return 0;
}
