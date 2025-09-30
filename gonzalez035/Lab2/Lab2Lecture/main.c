#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <limits.h>
#include <float.h>


int main()
{
    printf("Lab#2\n");

    int max_int = INT_MAX;
    int min_int = INT_MIN;

    printf("Maximum value of int: %d\n", max_int);
    printf("Minimum value of int: %d\n", min_int);

    //Size of Char
    char max_char = CHAR_MAX;
    char min_char = CHAR_MIN;

    printf("Maximum value of char: %d\n", max_char);
    printf("Minimum value of char: %d\n", min_char);


    //Size of Float
    float max_float = FLT_MAX;
    float min_float = FLT_MIN;

    printf("Maximum value of float: %d\n", max_float);
    printf("Minimum value of float: %d\n", min_float);



    //Exercise 1
    //Define two uint8_t variables with values close to the maximum
    uint8_t a = 200;
    uint8_t b = 100;

    //Add the two variables
    uint8_t result = a + b;

    //Print the values of a, b, and the result
    printf("a = %u\n", a);
    printf("b = %u\n", b);
    printf(" result = a + b = %u\n", result);

    //The correct result without overflow
    unsigned int correct_result = a + b;
    printf("Correct result without overflow: %u\n", correct_result);

    //We get this result because when working with 8 bits we can only store up to 255
    return 0;
}
