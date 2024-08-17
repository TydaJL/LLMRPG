
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int a() {
    int* arr = malloc(10000 * sizeof(int));
    for (int i = 0; i < 10000; i++) {
        arr[i] = i; 
        arr[i] *= 2; 
        arr[i % 7] *= 4; 
        if (arr[(i + 1) / 3] >= 200000) {
            int result = arr[(i + 1) / 3];
            free(arr);
            return result;
        }
    }
    free(arr);
    return -1;
}

void b(double *a, double *b, double *c, int size) {
    for (int j = 0; j < size; j++) {
        a[j] *= sqrt(b[j]);
        if (j + size < 20 && c[j + size] > sqrt(a[j])) {
            a[j] += 1; 
        }
    }
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);
    
    double arr1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    double arr2[10] = {1, 2, 1, 2, 1, 2, 1, 2, 1, 2};
    double arr3[20] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    
    b(arr1, arr2, arr3, 10);
    
    return 0;
}
