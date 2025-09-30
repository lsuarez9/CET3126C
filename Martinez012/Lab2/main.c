#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <float.h>
#include <stdint.h>

int main()
{
    int max_int = INT_MAX;
    int min_int = INT_MIN;

    printf("Maximum value of int: %d\n", max_int);
    printf("Minimum value of int: %d\n", min_int);

    char max_char = CHAR_MAX;
    char min_char = CHAR_MIN;

    printf("Maximum value of char: %d\n", max_char);
    printf("Minimum value of char: %d\n", min_char);

    float max_float = FLT_MAX;
    float min_float = FLT_MIN;

    printf("Maximum value of float: %.10e\n", FLT_MAX);
    printf("Minimum value of float: %.10e\n", FLT_MIN);

    uint8_t a = 200;
    uint8_t b = 100;

    uint8_t result = a+b;

    printf("a = %u\n",a);
    printf("b = %u\n", b);
    printf("result = a+b = %u\n", result);

    unsigned int correct_result = a+b;
    printf("Correct result without overflow: %u\n", correct_result);

        printf("\n-- Exercise 1:Data Types Sizes and Limits --\n" );

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





    printf("\n-- Exercise 2:Type Conversion --\n" );
//question 1
    int num_int = 100;
    float num_float = num_int;

    printf("Integer value: %d\n", num_int);
    printf("Converts an int to a float 'implicit conversion': %.10e\n", num_float);
//question 2

        float flt_val = 3.75f;
        int inflt_val = (int)flt_val;
    printf("\nFloat into Integer using Explicit Conversion\n");
    printf("Explicit:   float %.2f -> int %d  (fraction truncated)\n", flt_val, inflt_val);
//question 3

    char c_value = 'A';
    int ascii_val = (int)c_value;
    printf("\nChar into ASCII integer value \n");
    printf("Char to ASCII: '%c' -> %d\n\n", c_value, ascii_val);

printf("\n-- Exercise 3:Integer Overflow and Precision Loss --\n" );
//question 1

unsigned int u = UINT_MAX;
printf("Unsigned int max value: %u\n", UINT_MAX);
//question 2

u= u + 1;
printf("Adding 1, unsigned wraps around: %u\n", u);
//question 3
float large_flt = 1.0e20f;
float small_flt = 1.0f;
float add_flt = large_flt + small_flt;

printf("Large float: %.1f, Small float: %.1f, Addition of float 'lost of precision': %.1f\n", large_flt, small_flt, add_flt);

printf("\n-- Exercise 4:Mixing Data Types in Math --\n" );

//question 1
int num_mix = 10;
float mix_flt = 2.86f;

float mix_result = num_mix + mix_flt;

printf("Int: %d Float: %.2f = %.2f\n", num_mix, mix_flt, mix_result);

//question 2
char mix_char = 'A';
int ascii_v = (int)mix_char;
int k = 10;
int sum_char_k = mix_char + k;

printf("Char: %c(%d), Int: %d, Sum of char and int: %d\n", mix_char, ascii_v , k, sum_char_k);



    return 0;


}
