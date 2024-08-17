
#include <stdio.h>

void a() {
    int arr[5];
    for (int i = 0; i < 5; i++) {
        arr[i] = i * 10;
    }
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    a();
    return 0;
}
