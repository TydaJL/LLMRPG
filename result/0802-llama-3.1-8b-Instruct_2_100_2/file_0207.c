
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i;
    char* b = (char*) calloc(10, sizeof(char));
    for (i = 0; i < 100000; i++) {
        for (int j = i; j < 100000 && j < i + 10; j++) {
            *(b + j % 10) = 'a';
        }
    }
    int result = *(b);
    free(b);
    return result;
}

int b() {
    return a() + 1;
}

void* c(int* a, int* b) {
    int c = 0;
    for (c = 0; a[0] < b[0] - 1 && c < 5; c++) {
        a[c]++;
    }
    return a;
}

void* f() {
    int* arr1 = (int*)malloc(5 * sizeof(int));
    int* arr2 = (int*)malloc(5 * sizeof(int));
    if (arr1 != NULL && arr2 != NULL) {
        return c(arr1, arr2);
    }
    free(arr1);
    free(arr2);
    return NULL;
}

int main() {
    a();
    b();
    f();
    return 0;
}
