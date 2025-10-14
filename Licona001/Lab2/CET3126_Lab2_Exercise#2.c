//CET3126C - Lab #2 - Exercise #2 - 09/29/25

#include <stdio.h>
#include <limits.h>

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

int main()
{
    printf("Lab #2!\n");

printf("\n\t\t----------------Type Conversions----------------\n");
    Exercise_2();

    return 0;
}