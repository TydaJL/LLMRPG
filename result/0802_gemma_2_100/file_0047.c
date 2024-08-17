
#include <stdio.h>

int a() {
    return 1;
}

int b() {
    return 2;
}

int c() {
    return 3;
}

int d() {
    return 4;
}

int main() {
    int x = a() + b() + c() + d();
    printf("%d\n", x);
    return 0;
}
