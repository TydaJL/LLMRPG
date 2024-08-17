
#include <stdio.h>

void a() {
}

int *ptr;
int c;

void p(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        arr[i] = i * 2;
    }
}

int main() {
    a();
    int size = 10;
    int arr[size];
    p(arr, size);
    ptr = arr;

    for (int i = 0; i < size; i++) {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}
