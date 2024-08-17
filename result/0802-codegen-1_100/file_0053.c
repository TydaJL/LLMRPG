
#include <stdio.h>

int a() {
    return 5;
}

void b(int *i, float *x) {
    *i = a() * 2;
    *x = (float)(*i) / 2.0f;
}

int main() {
    int i;
    float x;
    
    b(&i, &x);
    
    printf("i: %d, x: %f\n", i, x);
    
    return 0;
}
