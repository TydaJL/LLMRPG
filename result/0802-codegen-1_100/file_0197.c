
#include <stdio.h>
#include <stdlib.h>

#define N 100

float a() {
    float sum = 0.0;
    float *b = (float *)malloc(N * sizeof(float));
    if (b == NULL) {
        printf("Memory allocation failed\n");
        return -1;
    }

    for (int i = 0; i < N; i++) {
        b[i] = (float)i;
        sum += b[i];
    }

    free(b);
    return sum;
}

int main() {
    float result = a();
    if (result == -1) {
        return 1;
    }
    printf("Sum: %f\n", result);
    return 0;
}
