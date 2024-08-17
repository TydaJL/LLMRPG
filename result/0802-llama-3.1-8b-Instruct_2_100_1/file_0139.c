
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 0;
}

long long add_numbers(int n) {
    long long res = 0;
    while (--n >= 0) {
        res += a();
    }
    return res;
}

int add_ints(int* arr, int size) {
    long long sum = 0;
    while (--size >= 0) {
        sum += arr[size];
    }
    return sum;
}

int main() {
    long long n;
    n = add_numbers(10000);
    printf("Sum of %d numbers is: %lld\n", 10000, n);

    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    
    int *arr = (int *)malloc(size * sizeof(int));
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    long long sum = add_ints(arr, size);
    printf("Sum of array elements is: %lld\n", sum);

    free(arr);
    return 0;
}
