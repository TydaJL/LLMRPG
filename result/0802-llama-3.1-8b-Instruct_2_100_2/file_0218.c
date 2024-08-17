
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* b;
    b = (int *)(malloc(4 * 1000000));
    if (b == NULL) {
        return -1;
    }
    int i, c;
    for (i = 0; (c = i * i) < 4000000; ++i) {
        b[c / sizeof(int)] ^= c;
    }
    free(b);
    return 0;
}

int main() {
    a();
    return 0;
}
