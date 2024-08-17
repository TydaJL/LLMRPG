
#include <stdio.h>

int a() {
    return 3;
}

void b() {}

int d() {
    return 1;
}

int main() {
    int result_a = a();
    b();
    int result_d = d();
    return 0;
}
