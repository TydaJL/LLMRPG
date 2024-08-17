
#include <stdio.h>
#include <stdlib.h>

float* a() {
    float* ptr = (float*)malloc(4 * sizeof(float));
    if (ptr == NULL) {
        return NULL;
    }
    
    ptr[0] = 1.0;
    ptr[1] = 2.0;
    ptr[2] = 3.0;
    ptr[3] = 4.0;

    float b = ptr[3] * 3 * 7;
    printf("%.3f %.1f\n", ptr[0], b);
    
    free(ptr);
    return NULL;
}

int main() {
    a();
    return 0;
}
