#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <float.h>
int main()
{
    printf("Lab #2 !\n");
/*
    int max_int = INT_MAX;
    int min_int = INT_MIN;

    printf ("Maximum value of int: %d\n", max_int);
    printf ("Minimum value of int: %d\n", min_int);

    //-------------------------------------------------
    // size of char
    char max_char = CHAR_MAX;
    char min_char = CHAR_MIN;

    printf ("Maximum value of char: %d\n", max_char);
    printf ("Minimum value of char: %d\n", min_char);

    // size of Float
    float max_float = FLT_MAX;
    float min_float = FLT_MIN;

    printf ("Maximum value of float: %.10e\n", max_float);
    printf ("Minimum value of float: %.10e\n", min_float);

*/

    //Exercise

    // Define two unit8_t variables with values close to the maximum
    uint8_t a = 200;
    uint8_t b = 100;

    // add the two variables
    uint8_t result = a+b;

    // print the variables of a,b and the result

    printf("a = %u\n",a);
    printf("b = %u\n",b);
    printf("result = a + b = %u\n", result);

    // the correct result will overflow
    unsigned int correct_result = a + b;
    printf("Correct result without overflow: %u\n", correct_result);
    return 0;
}
