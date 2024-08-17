
#include <stdio.h>

int functionA() {
    return 1 + 2 / 3;
}

void functionB(int a[10]) {
    printf("hello, ");
}

void functionC() {
    int a[5], b, c = 2;
    printf("Array initialized.\n");
}

int main() {
    printf("Function A returns: %d\n", functionA());
    int arr[10] = {0};
    functionB(arr);
    functionC();
    return 0;
}
