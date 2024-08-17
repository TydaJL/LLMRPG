
#include <stdio.h>

int a() {
    return 10;
}

void b(float *p) {
    int i;
    *p = 5.0;
    for (i = 0; i < 100; i++) {
        *p = *p * 2;
    }
}

int main() {
    float f;
    b(&f);
    printf("%1.1f\n", f);
    printf("%d\n", a());
    return 0;
}
