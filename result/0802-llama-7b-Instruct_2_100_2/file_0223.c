
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a() {
    int i, n = 20 + rand() % 40;
    return (i % n != 0) ? n : (a() % 10 + a() % 30 + a() % 15 + a() % 15 + a() % 15 + a());
}

int main() {
    srand(time(NULL));
    int n = a();
    printf("%d\n", n);
    int *arr = malloc((n - 2) * sizeof(int));
    for (int j = 0; j < n - 2; j++) {
        arr[j] = 0; 
    }
    int i = 0, j;
    while (i < n - 2) {
        for (j = 0; j < n - 2 - i; j++)
            arr[j] *= (j + 1);
        i++;
    }
    for (i = 0; i < n - 2; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    return 0;
}
