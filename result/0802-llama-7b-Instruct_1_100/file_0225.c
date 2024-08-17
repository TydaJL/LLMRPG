
#include <stdio.h>
#include <stdlib.h>

int a() {
    float b = 0;
    int *arr = malloc(10 * sizeof(int));
    if (arr == NULL) {
        return -1;
    }
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    int result = (int)(b + 3) / 3 / (arr[1] + 1) % 5;
    int x = 0;
    while (x < 10) {
        arr[x] = x + 1;
        x++;
    }
    free(arr);
    return result;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
