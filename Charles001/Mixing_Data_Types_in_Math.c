

#include <stdio.h>

int main(void)
{
    /* 1) int + float */
    int i = 5;
    float f = 2.5f;
    /* i is implicitly converted to float, result is float */
    float sum_if = i + f;
    printf("int + float example:\n");
    printf("  int i = %d, float f = %f\n", i, f);
    printf("  i + f = %f (i promoted to float)\n\n", sum_if);

    /* 2) char + int */
    char ch = 'A'; /* ASCII 65 */
    int j = 3;
    /* ch is promoted to int, so addition uses integer arithmetic */
    int sum_ci = ch + j;
    printf("char + int example:\n");
    printf("  char ch = '%c' (ASCII %d), int j = %d\n", ch, (int)ch, j);
    printf("  ch + j = %d (char promoted to int)\n\n", sum_ci);

    /* Explanation printed for clarity */
    printf("Explanation:\n");
    printf("  When mixing types, C performs usual arithmetic conversions\n");
    printf("  to promote the smaller type to the larger type before the operation.\n");
    printf("  - int + float -> int promoted to float, result is float.\n");
    printf("  - char + int -> char promoted to int (using its numeric ASCII code), result is int.\n");

    return 0;
}
