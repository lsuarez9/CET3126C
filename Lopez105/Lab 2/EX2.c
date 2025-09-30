#include <stdio.h>

int main(void){
    // Implicit conversion: 5 is an integer, but gets automatically converted to float by the complier.
    float impConfloatNum = 5;
    printf("Implicit conversion of 5 to %f\n", impConfloatNum);
    
    // Explicit conversion: 5.00 and 2.00 are floats, but the (int) will cast it to an integer
    int exConIntNum = (int) 10.00 / 3.00;
    printf("Explicit conversion of 3.33 to %d\n", exConIntNum);

    // Capital A's ASCII value is 65 
    int ASCIIValue = 'A';
    printf("The ASCII value of 'A' is %d\n", ASCIIValue);
    return 0;
}