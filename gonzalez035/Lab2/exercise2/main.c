#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{

    //**Comment out lines of code when testing**

    //Exercise 2
    //Convert an int to a float (implicit conversion)
    int intVal = 22;
    float floatVal = intVal;
    printf("Conversion result: %d to %f\n", intVal, floatVal);


    //Convert a float to an int (explicit conversion)
    float floatVal = 89.276;
    int intVal = (int)floatVal;
    printf("Conversion result: %f to %d\n", floatVal, intVal);


    //Convert a char to its ASCII integer value
    char charVal = 'A';
    int asciiVal = (int)charVal;
    printf("Conversion result: %c to %d\n", charVal, asciiVal);

    return 0;
}
