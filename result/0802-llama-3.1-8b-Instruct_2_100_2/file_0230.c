
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    int x = 5, i = 0, *y = malloc(3 * sizeof(int));
    if (y == NULL) {
        return -1;
    }
    y[2] = (x + i * (x - i)) / (x - i) - x;
    y[i + x - i] = (x + i) * x - x;
    free(y);
    return x;
}

int main(void) {
    char str[256];
    int x = 5, i = -5;
    float *f = malloc(5 * sizeof(float));
    
    if (f == NULL) {
        return -1;
    }

    a();

    free(f);
    return 0;
}
