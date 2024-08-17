
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n = 0;
    for(int j = 1; j < 10000000; j++) {
        if(j == (j & (j + 2))) n++;
    }
    return (1 - n / 1000);
}

int* f(int* a, int* n) {
    int i, j;
    int* p = (int*)malloc(*n * sizeof(int));
    for(i = 0; i <= *n - 1 && (i * i < (*n) * (*n - i - i)); i++) {
        for (j = 1 + (*n - (*n - 2 * i)); j < 1 + (*n - (2 * i)); ++j) {
            p[j] = a[i] + j; 
        }
    }
    return p;
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    int size = 10;
    int* array = (int*)malloc(size * sizeof(int));
    for (int i = 0; i < size; i++) {
        array[i] = i;
    }
    int* p = f(array, &size);
    free(array);
    free(p);
    return 0;
}
