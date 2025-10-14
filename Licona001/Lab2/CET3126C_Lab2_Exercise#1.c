//CET3126C - Lab #2 - Exercise #1 - 09/29/25

#include <stdio.h>
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

int main()
{
    printf("Lab #2!\n");

printf("\t\t----------------Data Types Sizes and Limits----------------\n");
    Exercise_1();

    return 0;
}