#include <stdio.h>
#include <limits.h>
#include <float.h>

// ---------- Exercise 1 ----------
void exercise1() {
    int i;
    short s;
    long l;
    unsigned int ui;
    float f;
    double d;
    char c;

    printf("\n--- Exercise 1: Data Type Sizes and Limits ---\n");
    printf("Data Type Sizes (in bytes):\n");
    printf("int: %zu\n", sizeof(i));
    printf("short: %zu\n", sizeof(s));
    printf("long: %zu\n", sizeof(l));
    printf("unsigned int: %zu\n", sizeof(ui));
    printf("float: %zu\n", sizeof(f));
    printf("double: %zu\n", sizeof(d));
    printf("char: %zu\n\n", sizeof(c));

    printf("Data Type Limits:\n");
    printf("int: %d to %d\n", INT_MIN, INT_MAX);
    printf("short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("unsigned int: 0 to %u\n", UINT_MAX);
    printf("float: %e to %e\n", FLT_MIN, FLT_MAX);
    printf("double: %e to %e\n", DBL_MIN, DBL_MAX);
    printf("char: %d to %d\n", CHAR_MIN, CHAR_MAX);
}

// ---------- Exercise 2 ----------
void exercise2() {
    int num = 42;
    float fnum;
    char ch = 'A';

    printf("\n--- Exercise 2: Type Conversion ---\n");

    // Implicit conversion (int → float)
    fnum = num;
    printf("Implicit conversion (int → float): %d -> %f\n", num, fnum);

    // Explicit conversion (float → int)
    fnum = 42.9;
    num = (int) fnum;
    printf("Explicit conversion (float → int): 42.9 -> %d\n", num);

    // Char to ASCII
    printf("Char '%c' has ASCII value: %d\n", ch, ch);
}

// ---------- Exercise 3 ----------
void exercise3() {
    printf("\n--- Exercise 3: Integer Overflow and Precision Loss ---\n");

    // Unsigned int overflow
    unsigned int u = UINT_MAX;
    printf("UINT_MAX: %u\n", u);
    u = u + 1;   // Wrap-around
    printf("After overflow: %u\n", u);

    // Precision loss in floating-point
    float big = 1.0e20;
    float result = big + 1.0;
    printf("Big float: %f\n", big);
    printf("Big float + 1.0 = %f (notice no change due to precision loss)\n", result);
}

// ---------- Exercise 4 ----------
void exercise4() {
    int i = 5;
    float f = 3.2;
    char c = 'A'; // ASCII 65

    printf("\n--- Exercise 4: Mixing Data Types in Math ---\n");

    // int + float (int promoted to float)
    float sum1 = i + f;
    printf("int + float: %d + %.1f = %.1f\n", i, f, sum1);

    // char + int (char promoted to int)
    int sum2 = c + i;
    printf("char + int: '%c' + %d = %d\n", c, i, sum2);
    printf("Explanation: char '%c' has ASCII value %d, so %d + %d = %d\n", c, c, c, i, sum2);
}

// ---------- Main Menu ----------
int main() {
    int choice;

    do {
        printf("\n==============================\n");
        printf("   C Programming Exercises\n");
        printf("==============================\n");
        printf("1. Data Type Sizes and Limits\n");
        printf("2. Type Conversion\n");
        printf("3. Integer Overflow and Precision Loss\n");
        printf("4. Mixing Data Types in Math\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice) {
            case 1: exercise1(); break;
            case 2: exercise2(); break;
            case 3: exercise3(); break;
            case 4: exercise4(); break;
            case 0: printf("Exiting program...\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }
    } while(choice != 0);

    return 0;
}
