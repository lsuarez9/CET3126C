#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>

int main()
{
    printf("Lab 2!\n");
//-------------------------------------------------------------
    printf("-- Exercise 1: Byte Sizes --\n");

   int i = 0;
    short s = 0;
    long l = 0;
    unsigned int ui = 0;
    float f = 0.0;
    double d = 0.0;
    char c = 'A';

    /* sizes using sizeof() */
    printf("Type sizes (in bytes):\n");
    printf("  sizeof(int)           = %zu\n", sizeof(int));
    printf("  sizeof(short)         = %zu\n", sizeof(short));
    printf("  sizeof(long)          = %zu\n", sizeof(long));
    printf("  sizeof(unsigned int)  = %zu\n", sizeof(unsigned int));
    printf("  sizeof(float)         = %zu\n", sizeof(float));
    printf("  sizeof(double)        = %zu\n", sizeof(double));
    printf("  sizeof(char)          = %zu\n", sizeof(char));
//------------------------------------------------------------
     printf("-- Exercise 2: Type Conversion --\n");

    int    i_val = 35;
    float  f_from_i = i_val;
    float  f_val = 5.34f;
    int    i_from_f = (int)f_val;
    char   c_val = 'L';
    int    ascii_of_c = (int)c_val;

    printf("Implicit:   int %d -> float %f\n", i_val, f_from_i);
    printf("Explicit:   float %.2f -> int %d  (fraction truncated)\n", f_val, i_from_f);
    printf("Char to ASCII: '%c' -> %d\n\n", c_val, ascii_of_c);
//---------------------------------------------------------------------------------------------
    printf("-- Exercise 3: Overflow --\n");

    unsigned int u = UINT_MAX;
    printf("UINT_MAX = %u\n", u);
    u = u + 1;
    printf("After adding 1, unsigned wraps to: %u\n", u);

    float big = 1.0e20f;
    float big_plus_one = big + 1.0f;
    printf("big = %.1f, big + 1 = %.1f, (big + 1) - big = %.1f\n\n",
           big, big_plus_one, big_plus_one - big);
//-----------------------------------------------------------
        printf("-- Exercise 4: Mixing Data Types --\n");

    int   p = 10;
    float q = 5.5f;
    float sum_if = p + q;
    printf("int %d + float %.2f = float %.2f  (int promoted to float)\n", p, q, sum_if);

    char ch = 'B';
    int  j  = 3;
    int  sum_ci = ch + j;
    printf("char '%c' (%d) + int %d = int %d  (char promoted to int)\n",
           ch, (int)ch, j, sum_ci);
    return 0;
}
