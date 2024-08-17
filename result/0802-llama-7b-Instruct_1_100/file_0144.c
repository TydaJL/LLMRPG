
#include <stdio.h>

int a() {
    int arr[] = {0, 1, 2, 3, 4};
    for(int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}

int main() {
    a();
    return 0;
}
