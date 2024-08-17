
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *ptr = malloc(1024 * sizeof(int));
    if (ptr == NULL) {
        return -1;
    }
    for (int i = 0; i < 1024; i++) {
        ptr[i] = 1 + i;
    }
    int *ptr_1 = realloc(ptr, 1024 * sizeof(int));
    if (ptr_1 == NULL) {
        free(ptr);
        return -1;
    }
    int result = ptr_1[1023];
    free(ptr_1);
    return result;
}

int main() {
    int x = a();
    printf("%d\n", x);
    return 0;
}
