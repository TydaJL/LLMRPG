
#include <stdio.h>
#include <string.h>

int a() {
    int n, i, j;
    for (n = 0; n <= 100000; n++) {
        for (i = n, j = n * n * 2; i > 0; --i) {
            j -= i;
            j -= j * n;
            if (n * n * 4 == n * j * 2 + n * n) return n;
        }
    }
    return 0;
}

int* b() {
    static char *s = "hello world";
    static int i;
    if (++i >= strlen(s)) i = strlen(s) - 1;
    return &i;
}

int* b2(int* p) {
    static int arr[10];
    for (int i = 0; i < 10; ++i) {
        arr[i] = p[i] + 1;
    }
    return arr;
}

int main() {
    int result_a = a();
    int* result_b = b();
    int p[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* result_b2 = b2(p);

    printf("Result from function a: %d\n", result_a);
    printf("Result from function b: %d\n", *result_b);
    printf("Result from function b2: ");
    for (int i = 0; i < 10; ++i) {
        printf("%d ", result_b2[i]);
    }
    printf("\n");

    return 0;
}
