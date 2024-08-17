
#include <stdio.h>
#include <stdlib.h>

int a() {
    int j = 5;
    int *arr = (int *)malloc(5 * j + sizeof(*arr) * 2);
    if (arr == NULL) {
        return -1;
    }

    int k = 3;
    k += 4;
    if (j == 0) {
        int l = j + k;
        if (k == 1) { }
        k = j - j;
        arr[l + j + 2] = l * j + j + 2;
        arr[arr[k + k + j] + 2 + j] -= j;
        arr[k - 2] = j * k - j;
        arr[j * j + k * j - 2 * j + j * j - 2 * j + j * j + 2 + k - k * j - j - j + 2 + j + j - j] = k + k + 2;
        arr[2 + 2] = j + j - 2;
    }
    free(arr);
    return 0;
}

int main() {
    a();
    return 0;
}
