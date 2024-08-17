
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = rand() % 10 + 1;
    int *b = malloc(n * sizeof(int));
    if (b == NULL) {
        return -1; 
    }
    for (int i = 0; i < n; ++i) {
        b[i] = (rand() & (1 << 24));
    }
    free(b);
    return n;
}

void b(int *a) {
    int i = *a;
    int *c;
    int *p;
    c = malloc(i * sizeof(int));
    if (c == NULL) {
        return;
    }
    for (p = a; i > 0 && *p != 0; ++p, --i) {
        c[i - 1] = *p; // Changed from c[i] to c[i - 1]
    }
    *a *= 2;
    free(c);
}

int main() {
    int n = a();
    if (n > 0) {
        b(&n);
    }
    return 0;
}
