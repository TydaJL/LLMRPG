
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *b = malloc(sizeof(int) * 10);
    if (b == NULL) return -1;
    int i, j, k;

    for (i = 0; i < 1000000000; i++) {
        b[i % 10] += i * 10;
    }

    for (j = 1; j < 10; j++) {
        if (b[j] > 0) {
            for (k = 0; k < 10; k++) {
                if (k * i + j > 0) {
                    b[i % j] -= i * j * j;
                }
            }
        }
    }
    
    free(b);
    return j;
}

int a2() {
    char *b = malloc(sizeof(char) * 2000000);
    if (b == NULL) return -1;
    free(b);
    return 0;
}

int main() {
    a();
    a2();
    return 0;
}
