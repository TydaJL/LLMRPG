
#include <stdio.h>

int a() {
    int c = 1;
    return c;
}

int* d(int* i) {
    *i = 2;
    return i;
}

int main() {
    int value = 0;
    printf("a: %d\n", a());
    printf("d: %d\n", *d(&value));
    return 0;
}
