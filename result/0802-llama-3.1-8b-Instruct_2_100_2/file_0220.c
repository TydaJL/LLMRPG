
#include <stdio.h>
#include <stdlib.h>

struct Pair {
    int a;
    int b;
};

int a() {
    int n = 1000000;
    struct Pair *arr = malloc(n * sizeof(struct Pair));
    if (arr == NULL) return -1;

    for (int i = 0; i < n; i++) {
        arr[i].a = i;
        arr[i].b = i * 2;
    }
    
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: a = %d, b = %d\n", i, arr[i].a, arr[i].b);
    }

    free(arr);
    return 0;
}

void b(int *arr, int *arr1, int arr1_sz) {
    int n = arr1_sz * arr1_sz;
    int *p = malloc(n * sizeof(int));
    if (p == NULL) return;

    for (int i = 0; i < n; i++) {
        p[i] = arr[i % arr1_sz] + arr1[i % arr1_sz];
    }

    for (int i = 0; i < n; i++) {
        printf("p[%d]: %d\n", i, p[i]);
    }

    free(p);
}

int main() {
    a();
    return 0;
}
