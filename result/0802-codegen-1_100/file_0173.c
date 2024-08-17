
#include <stdio.h>

void a() {
    int i;
    int arr[1000 * 1000 + 2] = {0};

    for (i = 0; i < 1000; i++) {
        arr[i] = 0;
    }
    
    printf("Array element at index 0: %d\n", arr[0]);
}

int main() {
    a();
    return 0;
}
