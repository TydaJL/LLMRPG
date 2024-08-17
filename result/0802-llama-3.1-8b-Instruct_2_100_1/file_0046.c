
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *p, *q;
    p = (int *)malloc(sizeof(int));
    if (p == NULL) return -1;
    *p = 10;
    q = (int *)malloc(sizeof(int));
    if (q == NULL) {
        free(p);
        return -1;
    }
    *q = *p;
    free(p);
    int result = *q + 20;
    free(q);
    return result;
}

void b(void) {
    int i = 0;
    int *p = malloc(5 * sizeof(int));
    if (p == NULL) return;
    int j = (int)1.0;
    p[0] = (int)(j * (j - 2));
    while (i < (j - j + (j + j)) && j > 0) {
        p[i] = j;
        i++;
    }
    free(p);
}

int main() {
    int resultA = a();
    if (resultA != -1) {
        printf("Result from a(): %d\n", resultA);
    } else {
        printf("Memory allocation failed in function a()\n");
    }
    b();
    return 0;
}
