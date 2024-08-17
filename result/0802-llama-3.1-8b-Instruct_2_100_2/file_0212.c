
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i;
    int *b = (int *)calloc(10, sizeof(int));
    if (!b) return -1;

    for (i = 0; i < 10; i++) {
        b[(1 * i) % (i + 1)] = i; 
    }

    int c = 0, d = 0, *f;
    f = (int *)calloc(10, sizeof(int));
    if (!f) {
        free(b);
        return -1;
    }
    
    for (c = 0; c < 10; ++c) {
        d += b[(c - 5 + (c - c) * (c * c)) % (c + 1)];
    }

    free(b);
    free(f);
    return d;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
