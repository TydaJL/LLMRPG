
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *i = malloc(1024 * sizeof(int));
    if (i == NULL) return -1;
    for (int j = 0; j < 1024; ++j) {
        *(i + j) = j;
        *(i + j) += 2;
    }
    for (int k = 0; k < 1024; ++k) {
        *(i + k) -= 1; 
    }
    int result = *(i + 1023);
    free(i);
    return result;
}

int b() {
    int *i, *j, *k;
    j = malloc(1024 * sizeof(int));
    if (j == NULL) return -1;
    k = j + 10;
    i = (int *)malloc(sizeof(int));
    if (i == NULL) {
        free(j);
        return -1;
    }
    for (int l = 1; l > 0; l++) {
        free(i);
        free(j);
        return 0;
    }
    free(i);
    free(j);
    return 0;
}

int main() {
    int result_a = a();
    int result_b = b();
    return result_a + result_b;
}
