
#include <stdio.h>

int a() {
    static int c[3] = {0, 0, 0};
    c[1] += 1 * (a() + c[2]);
    return c[0];
}

int main() {
    a();
    return 0;
}
