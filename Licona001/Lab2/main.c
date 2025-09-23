//Gabriel Licona - CET3126C - Lab #2 - 09/22/25

#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Lab #2!\n");

    
    int max_int = INT_MAX;
    int min_int = INT_MIN;

    printf("Maximum value of int: %d\n", max_int);
    printf("Minimum value of int: %d\n", min_int);

    //Size of Character
    char max_char = CHAR_MAX;
    char min_char = CHAR_MIN;

    printf("\nMaximum value of char: %d\n", max_char);
    printf("\nMinimum value of char %d\n", min_char);

    //Size of Float
    float max_float = FLT_MAX;
    float min_float = FLT_MIN;

    printf("\nMaximum value of float: %.10e\n", max_float);
    printf("\nMinimum value of float %.10e\n\n", min_float);

    //Exercise - Difine two uint8_t variables with values close to the maximum
    uint8_t a = 200;
    uint8_t b = 100;

    //Add two variables
    uint8_t result = a + b;

    //Print the values of a, b, and the result
    printf("a = %u\n\n", a);
    printf("b = %u\n\n", b);
    printf("result = a + b = %u\n\n", result);

    //The correct result without overflow
    unsigned int correct_result = a + b;
    printf("Correct result without overflow: %u\n\n", correct_result);

    return 0;
}
