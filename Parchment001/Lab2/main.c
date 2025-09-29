#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    // ===== Exercise 1: Data Type Sizes and Limits =====
    printf("== Exercise 1: Sizes and Limits ==\n");

    printf("sizeof(short)        = %zu bytes | SHRT_MIN = %hd, SHRT_MAX = %hd\n",
           sizeof(short), SHRT_MIN, SHRT_MAX);

    printf("sizeof(int)          = %zu bytes | INT_MIN  = %d,  INT_MAX  = %d\n",
           sizeof(int), INT_MIN, INT_MAX);

    printf("sizeof(long)         = %zu bytes | LONG_MIN = %ld, LONG_MAX = %ld\n",
           sizeof(long), LONG_MIN, LONG_MAX);

    printf("sizeof(unsigned int) = %zu bytes | UINT_MAX = %u\n",
           sizeof(unsigned int), UINT_MAX);

    printf("sizeof(char)         = %zu bytes | CHAR_MIN = %d,  CHAR_MAX = %d\n",
           sizeof(char), CHAR_MIN, CHAR_MAX); // printed as ints

    printf("sizeof(float)        = %zu bytes | FLT_MIN(>0) = %e, FLT_MAX = %e\n",
           sizeof(float), FLT_MIN, FLT_MAX);

    printf("sizeof(double)       = %zu bytes | DBL_MIN(>0) = %e, DBL_MAX = %e\n\n",
           sizeof(double), DBL_MIN, DBL_MAX);


    // ===== Exercise 2: Type Conversion =====
    printf("== Exercise 2: Type Conversion ==\n");

    int    i_val = 42;
    float  f_from_i = i_val;              // implicit int -> float
    float  f_val = 3.75f;
    int    i_from_f = (int)f_val;         // explicit float -> int (truncates)
    char   c_val = 'A';
    int    ascii_of_c = (int)c_val;       // char -> int (ASCII/character code)

    printf("Implicit:   int %d -> float %f\n", i_val, f_from_i);
    printf("Explicit:   float %.2f -> int %d  (fraction truncated)\n", f_val, i_from_f);
    printf("Char to ASCII: '%c' -> %d\n\n", c_val, ascii_of_c);


    // ===== Exercise 3: Integer Overflow and Precision Loss =====
    printf("== Exercise 3: Overflow & Precision ==\n");

    unsigned int u = UINT_MAX;
    printf("UINT_MAX = %u\n", u);
    u = u + 1; // wraps around (defined for unsigned)
    printf("After adding 1, unsigned wraps to: %u\n", u);

    float big = 1.0e20f;
    float big_plus_one = big + 1.0f;
    printf("big = %.1f, big + 1 = %.1f, (big + 1) - big = %.1f\n\n",
           big, big_plus_one, big_plus_one - big);
    // On typical hardware, (big + 1) == big due to loss of precision.


    // ===== Exercise 4: Mixing Data Types in Math =====
    printf("== Exercise 4: Mixing Data Types ==\n");

    int   a = 7;
    float b = 2.5f;
    float sum_if = a + b;        // int promoted to float
    printf("int %d + float %.2f = float %.2f  (int promoted to float)\n", a, b, sum_if);

    char ch = 'A';               // ASCII 65
    int  k  = 5;
    int  sum_ci = ch + k;        // char promoted to int
    printf("char '%c' (%d) + int %d = int %d  (char promoted to int)\n",
           ch, (int)ch, k, sum_ci);

    printf("\nExplanation: When C mixes types in an expression, it automatically promotes\n"
           "the smaller type to a larger/common type (\"usual arithmetic conversions\").\n"
           "Here, int -> float for the first sum, and char -> int for the second.\n");

    return 0;
}
