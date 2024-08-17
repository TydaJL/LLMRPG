
#include <stdio.h>
#include <stdlib.h>

void a() {
    int *ptr;
    ptr = malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return;
    }
    *ptr = 42;
    printf("Value at ptr: %d\n", *ptr);
    free(ptr);
}

int main() {
    a();
    return 0;
}
