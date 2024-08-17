
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *b;
    b = (int *)malloc(10 * sizeof(int));
    int *c;
    c = b;
    while (c - b < 10) {
        *c = c - b;
        c++;
    }
    c = b;
    int result = c[0];
    free(b);
    return result;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
