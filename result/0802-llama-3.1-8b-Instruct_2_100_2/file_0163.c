
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 1; // Changed to a base case to prevent infinite recursion
}

int* a2() {
    int *a = (int *)malloc(1000 * sizeof(int));
    if (a == NULL) {
        exit(1); // Check for malloc failure
    }
    for (int i = 0; i < 1000; i++) { // Change to 1000 to match allocated size
        a[i] = 0;
    }
    return a;
}

void b() {
    static int c[100] = {0};
    c[10] = 3;
    c[50] += 7;
    c[20]--;
}

void b2(int **a) {
    *a = (int *)malloc(100 * sizeof(int));
    if (*a == NULL) {
        exit(1); // Check for malloc failure
    }
}

int main() {
    printf("%d\n", a());
    int *arr = a2();
    printf("%p\n", (void*)arr);
    b();
    int *b2_arr;
    b2(&b2_arr);
    free(arr);
    free(b2_arr);
    return 0;
}
