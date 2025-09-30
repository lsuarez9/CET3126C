#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void){
    // Declaration of variables of multiple types, their quantity of bytes used, and their smallest and largest values
    char g = 'A';
    printf("The size of an char is %lu bytes\n", sizeof(g));
    printf("The largest value of a char is %d\n", CHAR_MAX);
    printf("The smallest value of a char is %d\n\n", CHAR_MIN);
    
    short b = 0;
    printf("The size of an short is %lu bytes\n", sizeof(b));
    printf("The largest value of a short is %hi\n", SHRT_MAX);
    printf("The smallest value of a short is %hi\n\n", SHRT_MIN);
    
    int a = 0;
    printf("The size of an integer is %lu bytes\n", sizeof(a));
    printf("The largest value of an integer is %d\n", INT_MAX);
    printf("The smallest value of an integer is %d\n\n", INT_MIN);    

    long c = 0;
    printf("The size of an long is %lu bytes\n", sizeof(c));
    printf("The largest value of a long is %li\n", LONG_MAX);
    printf("The smallest value of a long is %li\n\n", LONG_MIN);

    unsigned int d = 0;
    printf("The size of an unsigned int is %lu bytes\n", sizeof(d));
    printf("The largest value of a unsigned int is 0\n"); // The min is 0 because unsigned doesn't allow for negative numbers
    printf("The smallest value of a unsigned int is %u\n\n", UINT_MAX);

    float e = 0.00;
    printf("The size of an float is %lu bytes\n", sizeof(e));
    printf("The largest value of a float is %.10e\n", FLT_MAX);
    printf("The smallest value of a float is %.10e\n\n", FLT_MIN);

    double f = 0.00;
    printf("The size of an double is %lu bytes\n", sizeof(f));
    printf("The largest value of a double is %.10le\n", DBL_MAX);
    printf("The smallest value of a double is %.10le\n\n", DBL_MIN);

    return 0;
}