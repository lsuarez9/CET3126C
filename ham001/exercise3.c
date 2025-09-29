#include <stdio.h>
#include <limits.h>

int main() {
    printf("=== Integer Overflow and Precision Loss ===\n\n");
    
    // 1. Integer overflow with unsigned int
    printf("1. Unsigned Integer Overflow:\n");
    unsigned int maxUnsigned = UINT_MAX;
    printf("   UINT_MAX value: %u\n", maxUnsigned);
    printf("   Adding 1 to UINT_MAX...\n");
    maxUnsigned = maxUnsigned + 1;
    printf("   Result after overflow: %u\n", maxUnsigned);
    printf("   Explanation: Value wraps around to 0\n\n");
    
    // 2. Precision loss with large floats
    printf("2. Floating Point Precision Loss:\n");
    float largeFloat = 1.0e20;
    printf("   Original large float: %.0f\n", largeFloat);
    printf("   Adding 1.0 to it...\n");
    float result = largeFloat + 1.0;
    printf("   Result: %.0f\n", result);
    printf("   Difference detected: ");
    if (result == largeFloat) {
        printf("NO - the 1.0 was lost!\n");
    } else {
        printf("YES - values differ\n");
    }
    printf("   Explanation: Float has only ~7 significant digits\n\n");
    
    // Additional demonstration with smaller numbers
    printf("3. More Precision Loss Examples:\n");
    float f1 = 16777216.0f;  // 2^24, at the edge of float precision
    float f2 = f1 + 1.0f;
    printf("   16777216.0 + 1.0 = %.1f\n", f2);
    printf("   Are they equal? %s\n", (f1 == f2) ? "YES (precision lost)" : "NO");
    
    // Show signed integer overflow (undefined behavior, but demonstrative)
    printf("\n4. Signed Integer Overflow (Caution: Undefined Behavior):\n");
    int maxInt = INT_MAX;
    printf("   INT_MAX: %d\n", maxInt);
    printf("   INT_MAX + 1: %d (wraps to negative)\n", maxInt + 1);
    
    return 0;
}