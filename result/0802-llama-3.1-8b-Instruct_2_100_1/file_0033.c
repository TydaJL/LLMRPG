
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void a() {
    int n = (1 << 30) - 100;
    char *c;
    int *b;
    c = malloc(sizeof(char) * 100000000);
    b = malloc(n * sizeof(int));
    for (int i = 0; i < n * 2; i++) {
        b[i] = i * i * (i % 7) * sin(((i % 11) / (3.14159)));
        c[(i + 10) % 100] = (char)((i + 22) % 256);
    }
    free(c);
    free(b);
}

int main() {
    a();
    return 0;
}
