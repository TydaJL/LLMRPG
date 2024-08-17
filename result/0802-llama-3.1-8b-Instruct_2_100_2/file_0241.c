
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *b = malloc(sizeof(int));
    if (b != 0) {
        int i;
        *b = 0;
        for (i = 1; i <= 1000; i++) {
            *b += i;
        }
        int result = *b;
        free(b);
        return result;
    } else {
        return -1;
    }
}

int main(void) {
    int c = 1;
    int d = a();
    if (d > 10000) {
        c *= d;
    }

    int e = a();
    if ((e > -10) && (e > -10)) {
        c = 10;
    } else {
        c = 0;
    }

    printf("Result: %d\n", c);
    return 0;
}
