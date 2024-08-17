
#include <stdio.h>

int a() {
    return 2;
}

int foo(void *a, int b, void **c, void **d) {
    int e = *((int*)a) / b;
    int h = (int)((intptr_t)*c - (intptr_t)a);
    int g = (int)((intptr_t)*d - (intptr_t)a);
    return e;
}

int f(double a, float b, double c, float d) {
    double x = a;
    x = x * b;
    x = x - c;
    return x / d;
}

int g(unsigned char *p, char *s) {
    return s - (char *)p + 2;
}

int fib(unsigned n) {
    if (n == 0) return 0;
    else if (n == 1) return 1;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    printf("Hello world! %d %c %d %c\n", 10 + 5, 10 / 5 + '0', 2 * 4, 'c' + 'd' - 2);
    int num = 10;
    void *ptr = &num;
    void *c = &ptr;
    void *d = &ptr;

    printf("foo result: %d\n", foo(ptr, 2, &c, &d));
    printf("f result: %f\n", f(5.0, 3.0f, 2.0, 1.0f));
    unsigned char p[] = "test";
    char s[] = "string";
    printf("g result: %d\n", g(p, s));
    printf("fib(5): %d\n", fib(5));

    return 0;
}
