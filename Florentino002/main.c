#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
    // Exercise 1
    printf("===== Exercise 1: Data Type Sizes and Limits =====\n");

    int i = 42;
    short s = 10;
    long l = 123456;
    unsigned int ui = 100;
    float f = 3.14f;
    double d = 3.14159;
    char c = 'A';

    // Print sizes
    printf("Data Type Sizes (in bytes):\n");
    printf("int: %zu\n", sizeof(i));
    printf("short: %zu\n", sizeof(s));
    printf("long: %zu\n", sizeof(l));
    printf("unsigned int: %zu\n", sizeof(ui));
    printf("float: %zu\n", sizeof(f));
    printf("double: %zu\n", sizeof(d));
    printf("char: %zu\n\n", sizeof(c));

    // Print limits
    printf("Data Type Ranges:\n");
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned int: 0 to %u\n", UINT_MAX);
    printf("float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("char: %d to %d\n\n", CHAR_MIN, CHAR_MAX);

    // Exercise 2
    printf("===== Exercise 2: Type Conversion =====\n");

    int num = 7;
    float num_as_float = num; // implicit conversion
    printf("Implicit conversion (int -> float): %d becomes %.2f\n", num, num_as_float);

    float pi = 3.14159f;
    int pi_as_int = (int)pi; // explicit conversion
    printf("Explicit conversion (float -> int): %.5f becomes %d\n", pi, pi_as_int);

    char letter = 'A';
    int ascii_value = (int)letter;
    printf("Char to ASCII: '%c' becomes %d\n\n", letter, ascii_value);

    //  Exercise 3
    printf("===== Exercise 3: Integer Overflow and Precision Loss =====\n");

    unsigned int big = UINT_MAX;
    printf("Unsigned int max value: %u\n", big);
    big = big + 1; // overflow
    printf("After adding 1 (overflow): %u\n", big);

    float large_float = 1.0e20f;
    printf("Large float: %.1f\n", large_float);
    printf("Large float + 1.0 = %.1f (precision lost)\n\n", large_float + 1.0f);

    // Exercise 4
    printf("===== Exercise 4: Mixing Data Types in Math =====\n");

    int a = 5;
    float b = 2.5f;
    float result1 = a + b; // int + float -> float
    printf("int + float: %d + %.2f = %.2f\n", a, b, result1);

    char ch = 'A'; // ASCII 65
    int n = 10;
    int result2 = ch + n; // char promoted to int
    printf("char + int: '%c' (%d) + %d = %d\n", ch, ch, n, result2);

    printf("\nNote: C automatically promotes smaller types to larger ones in expressions.\n");

    return 0;
}
