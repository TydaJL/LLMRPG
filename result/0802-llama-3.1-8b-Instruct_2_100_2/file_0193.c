
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.14159265358979323846

void a() {
    double x = -1.0;
    double* arr = (double*)malloc(sizeof(double) * 100);
    if (arr == NULL) {
        perror("Failed to allocate memory for arr");
        exit(EXIT_FAILURE);
    }
    x = (double)rand() / RAND_MAX + 2 * (double)rand() / RAND_MAX;
    arr[99] = x;
    int* brr = (int*)malloc(sizeof(int) * 10000);
    if (brr == NULL) {
        perror("Failed to allocate memory for brr");
        free(arr);
        exit(EXIT_FAILURE);
    }

    for (int i = 0; i < 10000; i++) {
        brr[i % 10000] = (i * (i + 1));
    }

    for (int j = 0; j <= 10; j++) {
        double z = sin(2 * PI * (double)j / 10);
    }

    free(arr);
    free(brr);
}

int main() {
    a();
    return 0;
}
