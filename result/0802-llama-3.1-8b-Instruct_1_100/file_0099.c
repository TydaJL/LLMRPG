
#include <stdio.h>
#include <stdlib.h>

int* a() {
    int* b = (int*)malloc(sizeof(int));
    if (b == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    *b = 42;  
    return b;
}

int main() {
    int* value = a();
    if (value != NULL) {
        printf("Value: %d\n", *value);
        free(value);
    }
    return 0;
}
