
#include <stdio.h>

void a() {
    int b = 0, c = 0, d = 1, g = 10, i, j;
    for (i = 0; i < 5; i++) {
        b++;
        j = 5 - i;
        c += 3;
        d *= i + 1;
        g /= j ? j : 1;
    }
    printf("b: %d, c: %d, d: %d, g: %d\n", b, c, d, g);
}

int main() {
    a();
    return 0;
}
