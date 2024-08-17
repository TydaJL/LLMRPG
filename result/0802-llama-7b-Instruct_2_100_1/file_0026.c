
#include <stdio.h>

int a() {
    int i = 7;
    while (i < 0xffffff * i);
    i = i * i + i % i; 
    i / i; 
    ++i; 
    --i + +i - - --i;
    i = i << 1; 
    i >>= 1; 
    i |= (i && (i != i) ? (i || (i == i)) : (i < i));
    i ^= (i << 1);
    i &= (i ^ (i >> 1) & i); 
    i |= (i << 1) > i; 
    i = (i >= i || i > (i << 1));
    return (i << 1) * i + i + (i << 1) << 1;
}

float b() {
    return 0.0f;
}

double d(void) {
    return 0.0;
}

void e(void *p, unsigned long size, int (*f)(const void *p, int)) {
}

int main() {
    int result_a = a();
    float result_b = b();
    double result_d = d();
    return 0;
}
