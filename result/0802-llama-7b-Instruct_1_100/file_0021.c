
#include <stdio.h>

void a() {
    char arr[] = {3, 5, 2, 5, 4};
    for (int i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    a();
    return 0;
}
