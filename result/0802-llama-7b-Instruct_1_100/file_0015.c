
#include <stdio.h>

int* a() {
    static int arr[] = {1, 2, 3, 4};
    return arr;
}

int main() {
    int *ptr = a();
    for (int i = 0; i < 4; i++) {
        printf("%d ", ptr[i]);
    }
    return 0;
}
