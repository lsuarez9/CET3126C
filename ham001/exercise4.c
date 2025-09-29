#include <stdio.h>

int main() {
    printf("=== Mixing Data Types in Math Operations ===\n\n");
    
    // 1. Adding int and float
    printf("1. Adding int and float:\n");
    int intNum = 10;
    float floatNum = 3.5;
    float sum1 = intNum + floatNum;
    printf("   int value: %d\n", intNum);
    printf("   float value: %.1f\n", floatNum);
    printf("   Result (int + float): %.1f\n", sum1);
    printf("   Type of result: float\n\n");
    
    // 2. Adding char and int
    printf("2. Adding char and int:\n");
    char letter = 'A';
    int number = 5;
    int sum2 = letter + number;
    printf("   char value: '%c' (ASCII: %d)\n", letter, letter);
    printf("   int value: %d\n", number);
    printf("   Result (char + int): %d\n", sum2);
    printf("   As a character: '%c'\n", sum2);
    printf("   Explanation: 'A' (65) + 5 = 70 which is 'F'\n\n");
    
    // Additional examples
    printf("3. More Mixed Type Examples:\n");
    
    // int + double
    int a = 7;
    double b = 2.5;
    double result1 = a + b;
    printf("   int(7) + double(2.5) = %.1f (promoted to double)\n", result1);
    
    // int / int vs int / float
    int x = 7, y = 2;
    float z = 2.0;
    printf("   int(7) / int(2) = %d (integer division, truncates)\n", x / y);
    printf("   int(7) / float(2.0) = %.1f (float division, precise)\n", x / z);
    
    // char arithmetic
    char ch1 = 'a';
    char ch2 = ch1 + 1;
    printf("   'a' + 1 = '%c' (moves to next letter)\n", ch2);
    
    return 0;
}