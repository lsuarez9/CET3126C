#include <stdio.h>

int main(void){
    int x = 10;
    float y = 15.55;
    int intSum = x + y; // The float will be truncated, making it just 15
    float floatSum = x + y; // The int will be converted to float

    // Printing both possible options
    printf("The sum of an int and a float as an int is %d\n", intSum);
    printf("The sum of an int and a float as a float is %.3f\n\n", floatSum);

    char A = 'A';
    int B = 10;
    char charSum = A + B;
    int intCharSum = A + B;

    printf("The sum of a char and an int as a char %c\n", charSum); // 75 as a character is K
    printf("The sum of a char and an int as a int %d\n", intCharSum); // 'A' is 65, so this prints 75

    return 0;
}