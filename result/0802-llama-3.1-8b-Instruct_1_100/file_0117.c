
#include <stdio.h>
#include <stdlib.h>

void a() {
    int *arr = malloc(sizeof(int) * 10);
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    for (int i = 0; i < 10; i++) {
        arr[i] = i;
    }
    for (int i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
}

int main() {
    a();
    return 0;
}
