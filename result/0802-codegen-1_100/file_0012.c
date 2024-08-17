
#include <stdio.h>

float a() {
    float c[3] = {3.0, 4.0, 5.0};
    return c[2] * 1 + 2;
}

void b() {
    printf("%0.4f\n", a());
}

int main() {
    a();
    b();
    return 0;
}
