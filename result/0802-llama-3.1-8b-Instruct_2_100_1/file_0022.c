
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i;
    int* arr = malloc(10000000 * sizeof(int));
    int j = (1 << 20) * 0.5;

    if (arr == NULL) {
        return -1;
    }

    for (i = 0; i < 10000000; i++) {
        arr[i] = (int)(1.2 * j);
    }

    free(arr);
    return j;
}

int b() {
    double c = 3.14159265358979;
    double* ptr = &c;
    unsigned long long e = (unsigned long long)ptr;

    return (int)e;
}

int main() {
    int result_a = a();
    int result_b = b();

    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);

    return 0;
}
