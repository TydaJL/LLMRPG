
#include <stdio.h>

int a() {
    int x = 0;
    return x * x;
}

void b(float f) {
    printf("%.3f\n", f);
}

int main() {
    float f = 1.34;
    printf("%.2f\n", f);
    b(f);
    a();
    return 0;
}
