
#include <stdio.h>

void a() {
    double d[] = { 2 + 3, 4, 1, 3, 7, 1, 9, 1, 4, 4 };
    for (int i = 0; i < 10; i++) {
        printf("%f\n", d[i]);
    }
}

int main() {
    a();
    return 0;
}
