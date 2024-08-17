
#include <stdio.h>
#include <stdlib.h>

int a() {
    int* b = (int*)malloc(4);
    int* i = (int*)malloc(8);
    if(b == NULL || i == NULL) {
        return -1;
    }
    
    for(int x = 0; x < 1000; ++x) {
        *b = x;
        *i = 2 * *b + x;
    }
    
    free(b);
    free(i);
    
    b = (int*)malloc(4);
    i = (int*)malloc(8);
    if(b == NULL || i == NULL) {
        return -1;
    }
    
    for(int x = -100; x < 0; ++x) {
        *b *= x;
        *i *= x * x;
    }
    
    int result = *i;
    free(b);
    free(i);
    
    return result;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
