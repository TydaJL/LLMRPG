
#include <stdio.h>
#include <stdlib.h>

int* a() {
    int *b = (int *)malloc(2 * sizeof(int));
    b[0] = 0;
    b[1] = 1;
    return b;
}

int* c(int *a) {
    int *b = (int *)malloc(2 * sizeof(int));
    b[0] = a[0] + 1;
    b[1] = a[1] + 2;
    return b;
}

int main() {
    int *arr = a();
    int *result = c(arr);
    
    printf("Result: %d, %d\n", result[0], result[1]);

    free(arr);
    free(result);
    return 0;
}
