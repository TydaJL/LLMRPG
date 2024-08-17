
#include <stdio.h>

void a() {
    double a = 0.0, r = 1 / 1.0;
    r += (2 % ((int)a) + 3);
    printf("%6g %2g\\n%.5g\\n%.6g %.3g\\n", r, r, r, r);
}

int main() {
    a();
    return 0;
}
