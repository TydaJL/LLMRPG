
#include <stdio.h>
#include <stdlib.h>

void a() {
    float *p[8];
    for (int i = 0; i < 8; i++) {
        p[i] = (float *)malloc(sizeof(float));
        if (p[i] != NULL) {
            *p[i] = (float)(i + 1) * 1.5; 
        }
    }
    for (int i = 0; i < 8; i++) {
        if (p[i] != NULL) {
            printf("Value at p[%d]: %f\n", i, *p[i]);
            free(p[i]);
        }
    }
}

int main() {
    a();
    return 0;
}
