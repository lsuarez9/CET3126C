

#include <stdio.h>

int main(void)
{
    /* 1) Implicit int -> float conversion */
    int intVal = 7;
    float floatFromInt = intVal; /* implicit conversion */
    printf("Implicit conversion int -> float:\n");
    printf("  int value = %d\n", intVal);
    printf("  assigned to float -> %f (approx)\n\n", floatFromInt);

    /* 2) Explicit float -> int conversion  */
    float floatVal = 3.99;
    int intFromFloat = (int)floatVal; /* explicit cast, truncates toward zero */
    printf("Explicit conversion float -> int (using (int)):\n");
    printf("  float value = %f\n", floatVal);
    printf("  (int)float -> %d  (fractional part removed)\n\n", intFromFloat);

    /* 3) char to ASCII int value */
    char ch = 'A';
    int asciiOfChar = (int)ch; /* promotes char to int holding ASCII code */
    printf("Char to ASCII integer value:\n");
    printf("  char value = '%c'\n", ch);
    printf("  ASCII (int) = %d\n", asciiOfChar);

    return 0;
}
