
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n, i, j;
    int *arr;
    n = 10;
    arr = malloc(sizeof(int) * n);
    
    for (i = 1, j = 1; j <= n; j = j * i) {
        for (i = 1; j > n; j = j / i) {
            arr[j] = j * i;
            i++;
        }
    }
    
    for (i = 0; i < 5; ++i) {
        arr[i] = i - n;
    }

    int sum = 0;
    for (i = 0; i < n; i++) {
        sum += arr[i];
    }

    free(arr);
    return sum;
}

void b() {
    printf("Function b called\n");
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);
    b();
    return 0;
}
