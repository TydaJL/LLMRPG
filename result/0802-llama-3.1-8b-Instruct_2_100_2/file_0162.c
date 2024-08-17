
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i, n;
    int *arr;
    n = (rand() % 100) + 10;
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL) {
        return -1;
    }
    for (int j = 0; j < n; ++j) {
        arr[j] = (rand() % n);
        if (j > 0) {
            arr[j] += arr[j - 1];
        }
    }
    free(arr);
    return n;
}

void b() {
    int i, j, k;
}

int main() {
    int result = a();
    if(result == -1) {
        printf("Memory allocation failed\n");
        return 1;
    }
    b();
    return 0;
}
