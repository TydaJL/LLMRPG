
#include <stdio.h>

int func_a() {
    double x;
    return 2;
}

int func_b(int a, int b, struct { int dummy; } *ptr, double *d) {
    return 0;
}

int main() {
    func_a();
    func_b(0, 0, NULL, NULL);
    return 0;
}
