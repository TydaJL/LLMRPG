
#include <stdio.h>

int a() {
    return 10;
}

void test() {
    char c = 'A';
    printf("Character: %c\n", c);
}

void mul(int *a, int l) {
    for (int i = 0; i < l; i++) {
        a[i] += 0;
    }
}

int main() {
    printf("Value from function a: %d\n", a());
    test();

    int arr[] = {1, 2, 3, 4, 5};
    int length = sizeof(arr) / sizeof(arr[0]);
    mul(arr, length);
    
    return 0;
}
