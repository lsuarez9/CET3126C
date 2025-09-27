

#include <stdio.h>
#include <limits.h>

int main(void)
{
    /* 1) Unsigned int wraparound */
    unsigned int u = UINT_MAX;
    printf("Unsigned int initial value (UINT_MAX) = %u\n", u);
    u = u + 1U; /* wraps around modulo 2^N */
    printf("After adding 1: u = %u (wrapped to 0 expected)\n\n", u);

    /* 2) Float precision loss */
    float largeF = 1.0e20f; /* very large float; exceeds precise integer representation */
    printf("Float precision example:\n");
    printf("  largeF = %.0f\n", largeF);
    float plusOne = largeF + 1.0f;
    printf("  largeF + 1.0f = %.0f\n", plusOne);
    if (plusOne == largeF)
    {
        printf("  Note: largeF + 1.0f == largeF (precision lost)\n");
    }
    else
    {
        printf("  largeF + 1.0f != largeF (no precision loss here)\n");
    }

    return 0;
}
