
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* i = malloc(1 * sizeof(int));
    if (i == NULL) return -2;
    int* o = malloc(10 * sizeof(int));
    if (o == NULL) {
        free(i);
        return -3;
    }
    *i = 1;
    int c = 0;
    for (int j = 0; j < 100; ++j) {
        if ((j % 7) && (j % 5)) {
            c++;
        } else {
            o[j % 10] += j + (j / 10) + (j / 100);
        }
    }
    free(o);
    free(i);
    return c;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
