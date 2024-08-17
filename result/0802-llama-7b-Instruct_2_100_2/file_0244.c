
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    int c;
    c = (3 + (4 * 5) - (7 / 3));
    c = c * c;
    if (c <= 0)
        return 2;
    else
        return 1;
}

int* a_(void) {
    int *c = (int*)malloc(10 * sizeof(int));
    memset(c, 0, 10 * sizeof(int));
    c[2] = 65;
    return c;
}

void a_func() {
    int* ptr = a_();
    free(ptr);
    a();
    a();
    a();
}

void print_message() {
    printf("Hello World!\n");
}

int main() {
    for (; a(); a());
    a();
    a();
    print_message();
    return 0;
}
