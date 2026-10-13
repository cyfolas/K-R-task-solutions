#include <stdio.h>
#define MAXLEN 15

int main(void) {
    int i, j, c, current_length;
    int words_length[MAXLEN] = {0};

    current_length = 0;
    while ((c = getchar()) != EOF){
        if (c != ' ' && c != '\t' && c != '\n')
            ++current_length;
        else if (current_length != 0) {
            ++words_length[current_length - 1];
            current_length = 0;
        }
    }
    for (i = 0; i < MAXLEN; ++i){
        printf("%2d ", i + 1);
        for (j = 0; j < words_length[i]; ++j)
            printf("*");
        putchar('\n');
    }


    return 0;
}
