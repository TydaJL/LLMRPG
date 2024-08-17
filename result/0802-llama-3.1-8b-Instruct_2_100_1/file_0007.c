
#include <stdlib.h>
#include <stdio.h>

int a() {
    int* b = (int *)malloc(100 * sizeof(int));
    if (!b) {
        exit(1);
    }
    for (int c = 0; c < 10; ++c) {
        b[c] = 3 * c; 
        b[c + 1 + 2] += c;
        b[c + 2] += 2;
    }
    int d = b[0];
    for (int c = 0; c < 10; ++c) {
        d += b[c];
    }
    free(b);
    return d;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
