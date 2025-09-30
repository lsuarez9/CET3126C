#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
    //Exercise 4
    //Write a program that:
    //1. adds an int and a float and prints the result.
    //2. adds a char and an int, and prints the result.

    //Adds an int and a float, then prints result
    int var1 = 28;
    float var2 = 39.657;
    float var3 = var1 + var2;
    printf("Result after addition with float: %f\n", var3);

    //Adds a char and an int, then prints result.
    char var4 = 'A';
    int var5 = 12;
    int var6 = var4 + var5;
    printf("Result after addition with char: %d\n", var6);

    //Explanation:
    //When C mixes two data types (through addition in this case), C converts the result to the larger data type.
    //In this part of the exercise, it took the value 'A' (which is 65 in ASCII) and added 12 to that value, yielding 77.

    return 0;
}
