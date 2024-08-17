
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *p = (char *)malloc(100 * sizeof(char));
    if (p == NULL) {
        return -1;
    }
    for (int i = 0; i < 100; i++) {
        p[i] = (char)(i % 256);
    }
    for (int i = 0; i < 100; i++) {
        if (p[i]) {
            printf("p[%2d] %8d\n", i, (unsigned char)p[i]);
        }
    }
    free(p);
    return 0;
}

int main() {
    return a();
}
