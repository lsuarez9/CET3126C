#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main() {
    //exercise 3:
    //Creates an unsigned int variable and sets it to the biggest value (UINT_MAX)
    unsigned int unsignedIntValue = UINT_MAX;
    printf("Unsigned int max value: %u\n", unsignedIntValue);

    //Adds 1 to it and prints the new value (it should "wrap around" to 0)
    unsignedIntValue += 1;
    printf("After adding 1: %u\n", unsignedIntValue);

    //Shows how large float values lose precision (add 1.0 to a very large float like 1.0e20)
    float largeFloat = 1.0e20f;
    printf("Large float value before: %e\n", largeFloat);
    largeFloat += 1.0f;
    printf("After adding 1.0: %e\n", largeFloat);

    return 0;
}