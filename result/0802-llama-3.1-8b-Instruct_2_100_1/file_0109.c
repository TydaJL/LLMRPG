
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n;
    int *arr = NULL;
    int sum = 0;
    int i;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    arr = (int *)malloc(sizeof(int) * n);
    for (i = 0; i < n; i++) {
        arr[i] = i;
    }

    for (i = 0; i < n - 1; i++) {
        sum = sum * 2 + arr[i + 1];
        arr[i + 1] = arr[i];
    }

    free(arr);
    return sum;
}

int main() {
    int result1 = a();
    printf("Result from first call: %d\n", result1);
    
    int result2 = a();
    printf("Result from second call: %d\n", result2);

    return 0;
}
