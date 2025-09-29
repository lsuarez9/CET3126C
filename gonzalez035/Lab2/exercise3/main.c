#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
    //Exercise 3
    //Create an unsigned int variable and set it to the biggest value (UINT_MAX)
    unsigned int var1 = UINT_MAX;
    printf("Size of unsigned int variable: %u\n", var1);

    //Add 1 to unsigned int and print the new value. It needs to "wrap around" to 0
    var1 += 1;
    printf("Size of unsigned int after addition: %u\n");

    //Show how large float values lose precision (add 1.0 to every large float like 1.0e20)
    float var2 = 1.0e20f;
    printf("Before adding value to large float: %e\n", var2);
    var2 += 1.0f;
    printf("After adding value to large float: %e\n", var2);

    return 0;
}
