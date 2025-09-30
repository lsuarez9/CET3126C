#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Hello world!\n");

    //--------------------------
     printf("== Exercise 1: Data Type Sizes and Limits ==\n\n");

    printf("Sizes (in bytes):\n");
    printf("  sizeof(char)        = %zu\n", sizeof(char));
    printf("  sizeof(short)       = %zu\n", sizeof(short));
    printf("  sizeof(int)         = %zu\n", sizeof(int));
    printf("  sizeof(long)        = %zu\n", sizeof(long));
    printf("  sizeof(unsigned int)= %zu\n", sizeof(unsigned int));
    printf("  sizeof(float)       = %zu\n", sizeof(float));
    printf("  sizeof(double)      = %zu\n", sizeof(double));
    printf("\n");

    printf("Integer limits (from <limits.h>):\n");
    printf("  CHAR_MIN = %d, CHAR_MAX = %d\n", CHAR_MIN, CHAR_MAX);
    printf("  SHRT_MIN = %d, SHRT_MAX = %d\n", SHRT_MIN, SHRT_MAX);
    printf("  INT_MIN  = %d, INT_MAX  = %d\n", INT_MIN, INT_MAX);
    printf("  LONG_MIN = %ld, LONG_MAX = %ld\n", LONG_MIN, LONG_MAX);
    printf("  UINT_MAX = %u\n", UINT_MAX);
    printf("\n");

    printf("Floating-point limits (from <float.h>):\n");
    printf("  FLT_MIN  = %e, FLT_MAX  = %e\n", FLT_MIN, FLT_MAX);
    printf("  DBL_MIN  = %e, DBL_MAX  = %e\n", DBL_MIN, DBL_MAX);

    printf("\nNote: Actual sizes/limits may differ by platform/compiler.\n");
    //--------------------------
     printf("== Exercise 2: Type Conversion ==\n\n");

    int i = 42;
    float f_from_i = i;  // implicit conversion int -> float
    printf("Implicit: int %d -> float %.2f\n", i, f_from_i);

    float f = 3.99f;
    int i_from_f = (int)f; // explicit conversion (cast) float -> int
    printf("Explicit: float %.2f -> (int) %d\n", f, i_from_f);

    char c = 'A';
    int ascii = (int)c; // or just c in integer context
    printf("Char '%c' -> ASCII int %d\n", c, ascii);

    //---------------------
    printf("== Exercise 3: Integer Overflow and Precision Loss ==\n\n");

    // Unsigned overflow (wrap-around)
    unsigned int u = UINT_MAX;
    printf("Before overflow: u = UINT_MAX = %u\n", u);
    u = u + 1; // wraps to 0 in unsigned arithmetic (mod 2^N)
    printf("After  overflow: u + 1 -> %u\n\n", u);

    // Floating-point precision loss example
    float big = 1.0e20f;
    float plus_one = big + 1.0f;
    printf("Float precision loss:\n");
    printf("  big       = %.0f\n", big);
    printf("  big+1.0f  = %.0f\n", plus_one);
    printf("  Are they equal as floats? %s\n\n", (big == plus_one) ? "YES" : "NO");

    // Double for contrast (still huge but more precision)
    double bigD = 1.0e20;
    double plus_oneD = bigD + 1.0;
    printf("Double contrast:\n");
    printf("  bigD      = %.0f\n", bigD);
    printf("  bigD+1.0  = %.0f\n", plus_oneD);
    printf("  (Even doubles eventually lose integer precision when values get large enough.)\n");
    //---------------------
        printf("== Exercise 4: Mixing Data Types in Math ==\n\n");

    int j = 7;
    float g = 2.5f;
    float sum_if = j + g; // int promoted to float
    printf("int (%d) + float (%.2f) = float (%.2f)\n", j, g, sum_if);

    char d = 'A'; // ASCII 65
    int k = 10;
    int sum_ci = c + k; // char promoted to int
    printf("char ('%c' -> %d) + int (%d) = int (%d)\n", d, (int)d, k, sum_ci);

    printf("\nExplanation:\n");
    printf("- In mixed arithmetic, C applies the 'usual arithmetic conversions'.\n");
    printf("- Smaller integer types (like char) are promoted to int.\n");
    printf("- If one operand is float/double, the other is converted to that type.\n");
    //---------------------
    return 0;
}
