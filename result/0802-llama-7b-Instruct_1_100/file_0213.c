
#include <stdio.h>
#include <stdlib.h>

float a() {
    float c = 3.0f; 
    float **d = NULL; 
    float **b = malloc(sizeof(float*) * 1); 
    if (b == NULL) return 0; 
    b[0] = &c; 
    return (float)((intptr_t)b - 2.0f * 4.0f / 3.0f); 
}

int main() {
    float result = a();
    printf("Result: %f\n", result);
    return 0;
}
