//CET3126C - Lab #2 - Exercise #4 - 09/29/25

#include <stdio.h>
#include <limits.h>

void Exercise_4(){

    //Addition of Int and Float
    int int_val = 10;
    float float_val = 5;

    printf("\nAddition of integer and float values: %f\n", int_val + float_val); //int is converted to float so we use %f

    //Addition of Char and Int 
    char character = 'A';
    int integer = 2;

    printf("Addition of character and integer: %d\n", character + integer); //When adding it uses the ASCII value so we use %d
}

int main(){

    printf("Lab #2!\n");

    printf("\n\t\t----------------Mixing Data Types in Math----------------\n");
    Exercise_4();

    return 0;
}