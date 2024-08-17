
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* ptr = malloc(sizeof(*ptr));
    if (ptr == NULL) {
        exit(EXIT_FAILURE);
    } else {
        free(ptr);
    }
    return -1;
}

int b(void) {
    int* ptr = malloc(sizeof(int));
    if (ptr == NULL) {
        return -1;
    }
    *ptr = 0; 
    if (*ptr == -99999) {
        free(ptr);
        ptr = NULL;
    } else {
        free(ptr);
    }
    return 0;
}

int d() {
    return 0;
}

int main() {
    int result_a, result_b;
    result_a = a();
    result_b = b();
    return 0;
}
