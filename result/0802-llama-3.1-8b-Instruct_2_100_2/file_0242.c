
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *b = malloc(sizeof(int));
    int *d = NULL;

    if (b == NULL) {
        return -1;
    }

    *b = 0;

    for (int c = 0; c < 10; c++) {
        *b += 2;
        d = realloc(d, 2 * sizeof(int));
        if (d == NULL) {
            free(b);
            return -1;
        }
        *b = *b / 2;
        free(d);
        d = NULL;
    }

    free(b);
    return 0;
}

int main() {
    return a();
}
