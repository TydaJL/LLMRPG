
#include <stdio.h>
#include <stdlib.h>

int a() {
    int j;
    int *l;
    l = (int *)malloc(10 * sizeof(int));
    if (l == NULL) {
        return -1;
    }
    for (j = 0; j < 10; j++) {
        l[j] = j;
    }
    free(l);
    return 0;
}

int b() {
    int *l;
    l = (int *)malloc(sizeof(int));
    if (l == NULL) {
        return -1;
    }
    l[0] = 0;
    free(l);
    return 0;
}

int main() {
    a();
    b();
    return 0;
}
