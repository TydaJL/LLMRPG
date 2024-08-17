
#include <stdio.h>

double sumArray(double *arr, int size) {
    double sum = 0.0;
    for (int i = 0; i < size; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    double arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    int size = sizeof(arr) / sizeof(arr[0]);
    double result = sumArray(arr, size);
    printf("Sum of the array: %f\n", result);
    return 0;
}
