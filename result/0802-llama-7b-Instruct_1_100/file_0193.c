
#include <stdio.h>

int a() {
    int arr[5] = {1, 3, 2, 5, 4};
    return arr[0];
}

float x() {
    float arr[] = {1.0, 2.0, 3.0, 4.0, 5.0};
    return arr[0];
}

int main() {
    int intResult = a();
    float floatResult = x();
    printf("Result from a(): %d\n", intResult);
    printf("Result from x(): %.1f\n", floatResult);
    return 0;
}
