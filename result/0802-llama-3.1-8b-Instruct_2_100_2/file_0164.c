
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *a = NULL;
    int b;
    int i = 0;
    for (i = 0; i < 5; i++) {
        b = i + 10;
        a = realloc(a, (i + 1) * sizeof(int));
        if (a != NULL) {
            a[i] = b;
        } else {
            printf("memory not allocated ");
            exit(0);
        }
    }
    for (i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    free(a);
    return 0;
}

int main() {
    a();
    return 0;
}
