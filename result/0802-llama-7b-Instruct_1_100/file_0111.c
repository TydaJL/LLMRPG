
#include <stdio.h>
#include <stdlib.h>

void a() {
    float *ptr = malloc(6 * sizeof(float));
    if (!ptr) return;

    *ptr = 6.0 / 4 / 8;
    free(ptr); 

    ptr = malloc(5 * sizeof(float));
    if (!ptr) return;

    for (int i = 0; i < 5; i++) {
        ptr[i] = i * 5 - 4 % 2 / 4 - 3 + i;
    }

    free(ptr);
}

int main() {
    a();
    return 0;
}
