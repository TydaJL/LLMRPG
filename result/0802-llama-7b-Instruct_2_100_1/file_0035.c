
#include <stdio.h>

int a() {
    int i = 2;
    int c = 0;
    int sum = i + c + i;
    int j = sum + sum + i;
    return i + j;
}

int b = a() + 1;
int c = 0;
int d = c + a() + b + 0 + 0;
int e = 0;
int f = b + d + a() + e + 0;
int g = 0;
int h = a() + g + g + g + 0 + g + h + f + f + b + b + 0 + b + 0 + d + 0 + b + b + a() + e + b + g + g + b + b + e + d + e + a() + d + e + h + c + e + 0 + a() + d + h + a() + 0 + f + b + b + e + 0 + h + g + d + h + d + h + 0 + g + d + d + b + 0 + g;

int main() {
    a();
    printf("a: %d\n", a());
    printf("b: %d\n", b);
    printf("c: %d\n", c);
    printf("d: %d\n", d);
    printf("e: %d\n", e);
    printf("f: %d\n", f);
    printf("g: %d\n", g);
    printf("h: %d\n", h);
    return 0;
}
