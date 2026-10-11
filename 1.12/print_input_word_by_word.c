#include <stdio.h>
#define SPACE 1
#define NOT_SPACE 0

int main(void) {
    int c;
    int state = SPACE;
    while((c = getchar()) != EOF) {
        if (c != ' ' && c != '\n' && c != '\t') {
            putchar(c);
            state = NOT_SPACE;
        }
        else if (state == NOT_SPACE) {
            putchar('\n');
            state = SPACE;
        }
    }
    return 0;
}
