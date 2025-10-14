//Gabriel Licona - CET3126C - Lab #2 - 09/29/25

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

void Exercise_1(){

    //Size of Int
    printf("Size of int: %zu bytes\n", sizeof(int));
    //Built-in Limits of Int
    printf("Int can hold smallest value of {%d} and largest value of {%d}.\n", INT_MIN, INT_MAX);

    //Size of Short
    printf("\nSize of short: %zu bytes\n", sizeof(short));
    //Built-in Limits of Int
    printf("Short can hold smallest value of {%d} and largest value of {%d}.\n", SHRT_MIN, SHRT_MAX);

    //Size of Long
    printf("\nSize of long: %zu bytes\n", sizeof(long));
    //Built-in Limits of Long
    printf("Long can hold smallest value of {%ld} and largest value of {%ld}.\n", LONG_MIN, LONG_MAX);

    //Size of Unsigned int
    printf("\nSize of unsigned int: %zu bytes\n", sizeof(unsigned int));
    //Built-in Limits of Unsigned int
    printf("Unsigned int largest value of {%u}.\n", UINT_MAX); //Unsigned Integers don't have negative value so minimum will always be 0

    //Size of Float
    printf("\nSize of float: %zu bytes\n", sizeof(float));
    //Built-in Limits of Float
    printf("Float can hold smallest value of {%e} and largest value of {%e}.\n", FLT_MIN, FLT_MAX);

    //Size of Double
    printf("\nSize of double: %zu bytes\n", sizeof(double));
    //Built-in Limits of Double
    printf("Double can hold smallest value of {%e} and largest value of {%e}.\n", DBL_MIN, DBL_MAX);

    //Size of Char
    printf("\nSize of char: %zu byte\n", sizeof(char));
    //Built-in Limits of Char
    printf("Char can hold smallest value of {%d} and largest value of {%d}.\n", CHAR_MIN, CHAR_MAX);

}

void Exercise_2(){

    //Integer to Float (Implicit Conversion)
    int max_int = INT_MAX;
    float float_to_int_implicit = max_int;

    printf("\nValue before conversion: %d\n", max_int);
    printf("Value after Conversion: %.10e\n", float_to_int_implicit);

    //Float to Int (Explicit Conversion)
    float random_float = 15345.9876f;
    int int_to_float_explicit = (int) random_float;

    printf("\nValue before Conversion: %e\n", random_float);
    printf("Value after Conversion: %d\n", int_to_float_explicit);

    //Character to ASCII Value 
    char character = 'A';
    int ascii =  (int) character;

    printf("\nASCII integer value of 'A': %d\n", ascii);
}

void Exercise_3(){
    
    //Unsigned Integer Wrap-around
    unsigned int max_unsigned = UINT_MAX;

    printf("\nBiggest Value of Unsigned Integer + 1 = %u\n", max_unsigned + 1);

    //Precision Loss with large float
    float val = 1 + 1.0e20f;

    printf("Precision loss example using 1.0 + 1.0e20: %.1f\n", val); //Expected value 100000000000000000001.0
}

void Exercise_4(){

    //Addition of Int and Float
    int int_val = 10;
    float float_val = 5;

    printf("\nAddition of integer and float values: %f\n", int_val + float_val); //int is converted to float so we use %f

    //Addition of Char and Int 
    char character = 'A';
    int integer = 2;

    printf("Addition of character and integer: %d\n", character + integer); //When adding it uses the ASCII value so we use %d
}

int main()
{
    printf("Lab #2!\n");

printf("\t\t----------------Data Types Sizes and Limits----------------\n");
    Exercise_1();

printf("\n\t\t----------------Type Conversions----------------\n");
    Exercise_2();

printf("\n\t\t----------------Integer Overflow and Precision Loss----------------\n");
    Exercise_3();

printf("\n\t\t----------------Mixing Data Types in Math----------------\n");
    Exercise_4();

    return 0;
}

