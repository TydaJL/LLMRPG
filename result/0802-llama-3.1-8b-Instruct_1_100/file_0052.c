
#include <stdio.h>

void a() {
    int arr[10];
    for (int i = 0; i < 10; i++) {
        arr[i] = i * 2;
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    a();
    return 0;
}
