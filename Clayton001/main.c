#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void) {
    /* EXERCISE 1: */
    printf("Sizes (bytes):\n");
    printf("char=%zu short=%zu int=%zu long=%zu uint=%zu float=%zu double=%zu\n\n",
           sizeof(char), sizeof(short), sizeof(int), sizeof(long),
           sizeof(unsigned int), sizeof(float), sizeof(double));

    printf("Integer limits:\n");
    printf("short: %d..%d  int: %d..%d  long: %ld..%ld  uint: 0..%u\n\n",
           SHRT_MIN, SHRT_MAX, INT_MIN, INT_MAX, LONG_MIN, LONG_MAX, UINT_MAX);

    printf("Char limits:\n");
    printf("signed char: %d..%d  unsigned char: 0..%u\n\n",
           SCHAR_MIN, SCHAR_MAX, UCHAR_MAX);

    printf("Float limits (scientific):\n");
    printf("float: %.3e..%.3e  double: %.3e..%.3e\n\n",
           FLT_MIN, FLT_MAX, DBL_MIN, DBL_MAX);

    /* EXERCISE 2: */
    int   a = 42;        float f = a;
    float b = 3.7f;      int   i = (int)b;
    char  ch = 'A';      int   code = (int)ch;
    printf("Conv: int %d -> float %.1f\n", a, f);
    printf("Conv: float %.2f -> int %d\n", b, i);
    printf("Conv: char '%c' -> ASCII %d\n\n", ch, code);

    /* EXERCISE 3: */
    unsigned int u = UINT_MAX; u = u + 1;
    printf("Overflow: UINT_MAX+1 -> %u (wrap to 0)\n", u);
    float big = 1.0e20f, sum = big + 1.0f;
    printf("Precision: big=%.0e, big+1=%.0e -> %s\n\n",
           big, sum, (sum==big) ? "same (lost +1)" : "different");

    /* EXERCISE 4: */
    int x = 5; float y = 2.5f; float r1 = x + y;
    printf("Mix1: %d (int) + %.1f (float) = %.1f\n", x, y, r1);
    printf("Why: int is auto-converted to float, then float+float is done.\n");

    char c2 = 'A'; int n = 3; int r2 = c2 + n;
    printf("Mix2: '%c' (ASCII %d) + %d = %d -> '%c'\n", c2, (int)c2, n, r2, (char)r2);
    printf("Why: char turns into its number (ASCII), then normal int math.\n");

    return 0;
}
