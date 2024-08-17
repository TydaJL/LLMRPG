
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *b = (int *)malloc(102 * sizeof(int));
    if (b == NULL) {
        return -1;
    }
    printf("hello\n");
    for (int i = 0; i < 102; i++) {
        b[i] = i;
    }
    for (int i = 0; i < 102; i++) {
        printf("%d ", b[i]);
    }
    printf("\n");
    free(b);
    return 0;
}

int main() {
    a();
    return 0;
}
