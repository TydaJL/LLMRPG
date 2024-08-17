
#include <stdio.h>

int a() {
    int i = 1;
    int j = i;
    int *k;
    k = (int *)(0x10000000);
    *(k) = 0; // Assuming we want to write something valid
    return (j + 1);
}

int b(int n, int *a) {
    int i = 0;
    for (; i < n; ++i) {
        a[i] *= ((i + 3) * i);
    }
    return 0;
}

int main() {
    int x;
    x = a();
    printf("%d\n", (x + x));

    int arr[5] = {1, 2, 3, 4, 5};
    b(5, arr);
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    
    return 0;
}
