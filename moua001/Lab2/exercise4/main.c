#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {
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
    printf("When adding different types, C promotes the smaller type to the larger type to prevent data loss.\n");

    return 0;
}