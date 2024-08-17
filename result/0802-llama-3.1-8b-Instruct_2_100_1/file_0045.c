
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *b = (int*) malloc(10 * sizeof(int));
    if (b == NULL) return -1;
    b[0] = 1;
    for (int i = 1; i < 10; i++) {
        b[i] = (i % 2) ? b[i - 1] + i * 5 + i - i : i - i - i - i;
    }
    free(b);
    return 0;
}

int c() {
    float f, e;
    e = 0;
    f = (e = e * 0.9) + 3.14;
    return 0;
}

int main() {
    a();
    c();
    return 0;
}
