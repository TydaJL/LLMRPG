
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *v = (int *)malloc(3 * sizeof(int));
    if (v == NULL) {
        return -1;
    }
    for (int i = 0; i < 3; i++) {
        v[i] = i * 4; 
    }
    int result = v[0] + v[1] + v[2];
    free(v);
    return result;
}

int f() {
    return 0;
}

int main() {
    int resultA = a();
    printf("Result of a(): %d\n", resultA);
    f();
    return 0;
}
