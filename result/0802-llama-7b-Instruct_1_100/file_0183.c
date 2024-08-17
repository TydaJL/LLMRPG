
#include <stdio.h>

int a() {
    return 1;
}

int b[1][1] = { { 2 } };

int f() {
    return 3;
}

int g[5] = { 0, 1, 2, 3, 4 };

int main() {
    a();
    f();
    return 0;
}
