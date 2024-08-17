
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a() {
    char *b = (char*)malloc(sizeof(char) * 100);
    if (b == NULL) {
        return -1;
    }
    for (int x = 0; x < 100; ++x) {
        b[x] = 'a' + rand() % ('z' - 'a' + 1);
    }
    free(b);
    return rand() % (int)(1e9);
}

int main() {
    int n = a();
    printf("%d\n", n);
    return n;
}
