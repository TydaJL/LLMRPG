
#include <stdio.h>
#include <stdlib.h>

int* createArray(int n) {
    int *a = (int *)malloc(n * sizeof(int));
    if (a == NULL) {
        exit(1);
    }
    for (int i = 0; i < n; i++) {
        a[i] = i;
    }
    return a;
}

void printArray(int *a, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main() {
    int n = 10;
    int *array = createArray(n);
    printArray(array, n);
    free(array);
    return 0;
}
