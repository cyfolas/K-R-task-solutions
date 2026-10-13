#include <stdio.h>
#define MAXLEN 256

int main(void) {
    int i, j, c;
    int symbols_counter[MAXLEN] = {0};

    while((c = getchar()) != EOF) {
        ++symbols_counter[c];
    }

    for (i = 0; i < MAXLEN; ++i) {
        if (symbols_counter[i] == 0)
            continue;
        if (i >= 32 && i < 127)
            printf("'%c' ", i);
        else
            printf("%3d ", i);
        for (j = 0; j < symbols_counter[i]; ++j) {
            putchar('*');
        }
        putchar('\n');
    }

    return 0;
}
