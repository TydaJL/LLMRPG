
#include <stdio.h>

int a() {
    int c = 0;
    float e = 0.0;
    c = (int)(e - 1 * c + 0) + 1 + ((a() + 2) == 4);
    return c;
}

int b() {
    return 1;
}

int d() {
    return 2;
}

int main() {
    a();
    b();
    d();
    return 0;
}
