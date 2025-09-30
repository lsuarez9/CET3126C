#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){
    // An unsigned integer set to the maximum value wrapping around to 0
    unsigned int unsignedVal = UINT_MAX;
    printf("Max Starting Value: %u\n", unsignedVal);
    printf("Wrap Around: %u\n\n", unsignedVal + 1);
    
    // This float is too large so adding 1.0 to it shows a loss of precision
    float largeFloatVal = 1.0e20;
    float x = largeFloatVal + 1;

    if(largeFloatVal == x){
        printf("The float values are the same, showing a loss of precision\n");
    }
    else{
        printf("The float values are not the same\n");
    }   
    
    return 0;
}