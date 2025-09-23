#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {
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

    return 0;
}