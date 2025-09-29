#include <stdio.h>

int main() {
    printf("=== Type Conversion Examples ===\n\n");
    
    // 1. Implicit conversion: int to float
    int intValue = 42;
    float floatResult = intValue;  // Implicit conversion
    printf("1. Implicit Conversion (int to float):\n");
    printf("   Original int value: %d\n", intValue);
    printf("   After conversion to float: %.2f\n\n", floatResult);
    
    // 2. Explicit conversion: float to int using cast
    float floatValue = 3.14159;
    int intResult = (int)floatValue;  // Explicit cast
    printf("2. Explicit Conversion (float to int):\n");
    printf("   Original float value: %.5f\n", floatValue);
    printf("   After cast to int: %d\n", intResult);
    printf("   Note: Decimal part is truncated, not rounded\n\n");
    
    // 3. Convert char to ASCII integer value
    char letter = 'A';
    int asciiValue = (int)letter;  // Explicit cast
    printf("3. Character to ASCII Conversion:\n");
    printf("   Character: %c\n", letter);
    printf("   ASCII value: %d\n", asciiValue);
    printf("   (You can also print without cast: %d)\n", letter);
    
    // Additional examples
    printf("\n--- Additional Examples ---\n");
    char letter2 = 'Z';
    printf("Character 'Z' has ASCII value: %d\n", letter2);
    
    float pi = 3.14159;
    printf("Converting %.5f to int gives: %d\n", pi, (int)pi);
    
    return 0;
}