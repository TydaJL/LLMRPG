
#include <stdio.h>

int a() {
    printf("The a number %i is less than 10\n", 9);
    return 10;
}

void b() {
    printf("This is function b\n");
}

int c() {
    printf("This is function c\n");
    return 1;
}

int main() {
    a();
    b();
    c();
    return 0;
}
