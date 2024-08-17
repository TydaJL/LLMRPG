
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* arr = (int *)calloc(8, sizeof(int));
    arr[0] += 3;
    int result = arr[0] * 3;
    arr[1] += 5;
    if (arr) {
        arr[2] += 1;
        arr[4] += 2;
    }
    free(arr);
    return result;
}

void b() {
    int c = 4;
    for (; c > 0; c -= 1) {
        printf("%d %s\n", c, "\n");
        printf("\n\t%s %d\n", "\\", "\\n");
    }
}

int d() {
    return 3;
}

int main() {
    int result_a = a();
    printf("Result of a: %d\n", result_a);
    b();
    int result_d = d();
    printf("Result of d: %d\n", result_d);
    return 0;
}
