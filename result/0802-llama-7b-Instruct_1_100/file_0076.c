
#include <stdio.h>
#include <stdlib.h>

int a() {
    float *arr = (float *)malloc(5 * sizeof(float));
    if (arr == NULL) {
        return -1;
    }
    float b[] = {1, 0, 2, 5, 3, 1, 1, 0, 6, 7, 2, 8, 7, 1, 6, 8, 7, 9, 5, 0, 0, 0, 4, 1, 9, 9, 7, 1, 5, 6, 8, 9, 1, 1, 2, 3, 2, 6, 3, 1, 4, 5, 4, 3, 3, 4, 0, 9, 6, 5, 5, 6, 3, 5, 4, 3, 4};
    for (int i = 0; i < 5; i++) {
        arr[i] = b[i];
    }
    free(arr);
    return 0;
}

int main() {
    a();
    return 0;
}
