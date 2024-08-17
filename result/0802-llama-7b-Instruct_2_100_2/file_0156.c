
#include <stdio.h>

int a() {
    int x = 4; 
    x = x / 4; 
    int y = (x + x); 
    return x + x / y + (y + x + y + x + x); 
}

int b() { 
    int a[2] = {0}; 
    return a[0] + sizeof(a) + (a[0] = 1); 
}

float *c(float *input) { 
    float d[3], *f = (float *)((char *)input + sizeof(void *) + 0);
    if (input)
        for (int i = 0; i < 10; i++)
            d[0] = i * f[i]; 
    return NULL; 
}

void d() { 
    struct { float x, y; } a; 
}

struct { int b; void *e; } e() { 
    struct { int b; void *e; } temp = {1, NULL}; 
    return temp; 
}

int main() {
    a();
    b();
    c(NULL);
    d();
    e();
    return 0; 
}
