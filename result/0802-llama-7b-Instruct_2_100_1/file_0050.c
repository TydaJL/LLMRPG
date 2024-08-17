
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 1 + 2 - 5 * 4;
}

int b(int c) {
    for (int g = 1; a() < 10; g++) {
        c = g * g;
    }
    return 10;
}

int main() {
    int *b_ptr = (int *)malloc(sizeof(int));
    if (b_ptr == NULL) {
        return 1;
    }
    *b_ptr = 5;
    
    float d = (float)a() / (*b_ptr) * 3;
    d = ((*b_ptr) * d + a() * (*b_ptr)) * d;

    int c = 2;
    int result = (*b_ptr) - c - d / (*b_ptr);
    
    int g = a();
    int h = b(c);
    
    free(b_ptr);
    return result;
}
