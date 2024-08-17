
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a() {
    int n;
    int *arr;
    arr = (int *)calloc(100, sizeof(int));
    n = 0;
    for (n = 0; n < 100; ++n) {
        arr[n] = (rand() % 100) + 100;
    }
    int result = arr[99];
    free(arr);
    return result;
}

int main() {
    srand(time(NULL));
    int result = a();
    printf("%d\n", result);
    return 0;
}
