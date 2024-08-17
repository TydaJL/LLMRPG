
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 5;
}

int* c() {
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = a();
    return ptr;
}

int b() {
    return a();
}

int f(int a, int *c) {
    return (*c = a);
}

void g(void *c) {
    free(c);
}

void h(int c) {
    printf("%p %i\n", (void *)c, c);
}

int main() {
    h((int)(void *)&a);
    int *ptr = c();
    h((int)ptr);
    h(f(10, ptr));
    g(ptr);
    return 0;
}
