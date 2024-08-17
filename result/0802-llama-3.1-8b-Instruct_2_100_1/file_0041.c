
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *a = (int *)malloc(10240000 * sizeof(int));
    int *b = (int *)malloc(10240000 * sizeof(int));
    int c = 0;

    if (a == NULL || b == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return -1;
    }

    for (int j = 0; j < 10240000; j++) {
        a[j] = j;
        b[j] = j;
        if (j % 1000000 == 0) {
            c += j;
        }
    }
    
    free(a);
    free(b);
    return c;
}

int main() {
    int result = a();
    if (result != -1) {
        printf("Result: %d\n", result);
    }
    return 0;
}
