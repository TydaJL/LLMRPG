
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    double x = rand();
    double *p = malloc(sizeof(*p));
    int b;
    int y = 0;
    b = x * y;
    free(p);
    while (b < y) {
        b += y;
        y *= 2;
    }
    y *= -1;
    return y;
}

int b() {
    char *s = malloc(sizeof(char) * 1024);
    memset(s, 'x', sizeof(char) * 100);
    strcpy(s, "hello world");
    int len = strlen(s);
    free(s);
    return len;
}

int c() {
    return 42;
}

int main() {
    int result_a = a();
    int result_b = b();
    int result_c = c();
    printf("Result of a: %d\n", result_a);
    printf("Result of b: %d\n", result_b);
    printf("Result of c: %d\n", result_c);
    return 0;
}
