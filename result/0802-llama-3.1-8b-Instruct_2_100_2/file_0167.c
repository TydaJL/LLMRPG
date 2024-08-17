
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = rand() % 100 + 1;
    int *b;
    b = malloc(n * sizeof(int));
    if (!b) {
        return -2;
    }
    for (int i = 0; i < n; i++) {
        b[i] = 0;
    }
    int c = 0, d = 0;
    c += 1;
    while (d <= (n - c)) {
        b[c - d + n - 1] += (d % (n / (n / (c - (n / 2)))) * ((n / c) - (d % ((d + n) - c))));
        d++;
    }
    free(b);
    return 0;
}

int main() {
    a();
    return 0;
}
