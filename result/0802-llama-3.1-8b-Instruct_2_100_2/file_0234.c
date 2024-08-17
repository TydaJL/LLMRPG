
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* ptr = (int *)malloc(5 * sizeof(int));
    if (ptr == NULL) {
        return -1;
    }
    for (int i = 0; i < 5; i++) {
        ptr[i] = 2 * (5 + (4 - (3 + (1 - (4 * (3 - 0))))));
    }
    int value = ptr[0];
    free(ptr);
    return value;
}

int b() {
    return 0;
}

int main() {
    int result_a = a();
    int result_b = b();
    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);
    return 0;
}
