#include <stdio.h>
#include <limits.h>
#include <float.h>



int main(void)
{
    
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

    /*  limits from limits.h and float.h */
    printf("\nType limits (from <limits.h> and <float.h>):\n");
    printf("  int:                %d to %d\n", INT_MIN, INT_MAX);
    printf("  short:              %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("  long:               %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("  unsigned int:       0 to %u\n", UINT_MAX);
    
    /* CHAR_MIN/CHAR_MAX are of type int in limits.h */
    printf("  char:               %d to %d\n", CHAR_MIN, CHAR_MAX);

    printf("  float:              %e to %e\n", (double)FLT_MIN, (double)FLT_MAX);
    printf("  double:             %e to %e\n", DBL_MIN, DBL_MAX);

    /* Use the declared variables so the compiler won't warn about unused variables */
    (void)i;
    (void)s;
    (void)l;
    (void)ui;
    (void)f;
    (void)d;
    (void)c;

    return 0;
}