//CET3126C - Lab #2 - Exercise #3 - 09/29/25

#include <stdio.h>
#include <limits.h>

void Exercise_3(){
    
    //Unsigned Integer Wrap-around
    unsigned int max_unsigned = UINT_MAX;

    printf("\nBiggest Value of Unsigned Integer + 1 = %u\n", max_unsigned + 1);

    //Precision Loss with large float
    float val = 1 + 1.0e20f;

    printf("Precision loss example using 1.0 + 1.0e20: %.1f\n", val); //Expected value 100000000000000000001.0
}

int main(){

    printf("Lab #2!\n");

    printf("\n\t\t----------------Integer Overflow and Precision Loss----------------\n");
    Exercise_3();

    return 0;
}