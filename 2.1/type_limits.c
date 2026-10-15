#include <stdio.h>
#include <limits.h>

int main() {
    unsigned char uc   = 0 - 1;
    unsigned short us  = 0 - 1;
    unsigned int ui    = 0 - 1;
    unsigned long ul   = 0 - 1;


    printf("=== CHAR ===\n");
    printf("limits.h: signed [%d, %d], unsigned [0, %u]\n", SCHAR_MIN, SCHAR_MAX, UCHAR_MAX);
    printf("Calculation:   signed [%d, %d], unsigned [0, %u]\n\n", (char)(uc/2)*-1-1, (char)(uc/2), uc);

    printf("=== SHORT ===\n");
    printf("limits.h: signed [%d, %d], unsigned [0, %u]\n", SHRT_MIN, SHRT_MAX, USHRT_MAX);
    printf("Calculation:   signed [%d, %d], unsigned [0, %u]\n\n", (short)(us/2)*-1-1, (short)(us/2), us);

    printf("=== INT ===\n");
    printf("limits.h: signed [%d, %d], unsigned [0, %u]\n", INT_MIN, INT_MAX, UINT_MAX);
    printf("Calculation:   signed [%d, %d], unsigned [0, %u]\n\n", (int)(ui/2)*-1-1, (int)(ui/2), ui);

    printf("=== LONG ===\n");
    printf("limits.h: signed [%ld, %ld], unsigned [0, %lu]\n", LONG_MIN, LONG_MAX, ULONG_MAX);
    printf("Calculation:   signed [%ld, %ld], unsigned [0, %lu]\n\n", (long)(ul/2)*-1-1, (long)(ul/2), ul);

    return 0;
}
