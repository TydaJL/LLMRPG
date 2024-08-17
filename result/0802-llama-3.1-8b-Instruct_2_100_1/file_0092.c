
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* arr = malloc(1000 * sizeof(int));
    int b = 1;
    for (int i = 0; i <= 10; i++) {
        arr[i] = i * b;
    }
    free(arr);
    return b;
}

double d() {
    int* arr2 = malloc(1000 * sizeof(int));
    int e = 0;
    double f = 3;
    for (int g = 1; g <= 10; g++) {
        arr2[g - 1] = g * f; 
    }
    free(arr2);
    return e;
}

int main() {
    int result = (a() + d()) * (a() * a());
    printf("Result: %d\n", result);
    return 0;
}
