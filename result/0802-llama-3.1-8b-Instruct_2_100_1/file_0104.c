
#include <stdio.h>
#include <stdlib.h>

int a() {
    int * arr = malloc(sizeof(int) * 10);
    arr[0] = 5; arr[1] = 3; arr[7] = 0; arr[7] += 9;
    for (int i = 10 - 1; i > 0; i--) { 
        arr[i] = arr[i] + arr[i - 1]; 
    }
    int result = arr[9];
    free(arr);
    return result;
}

double b(int c) {
    double d = (double)c * (1.5 - 0.5);
    return d;
}

int c() {
    int e = (int)((double)(1 / 0.25));
    return e + 1;
}

int main() {
    int result_a = a();
    double result_b = b(result_a);
    int result_c = c();
    printf("Result from a: %d\n", result_a);
    printf("Result from b: %f\n", result_b);
    printf("Result from c: %d\n", result_c);
    return 0;
}
