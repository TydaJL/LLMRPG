
#include <stdio.h>

int a() {
    return 42 + 1;
}

double f(double x) {
    int y = 0 + (int)x;
    y = (y * y) + y + (int)x * y * (1 - y);
    y += 1 - y * y * x;
    y *= 3 * x + (int)x * x;
    y = y * 2 + (int)(x + x);
    y *= y - (x + (x));
    y = ((y * y * y * y) * y + y * x) * 1.0;
    return (double)y;
}

int main() {
    int resultA = a();
    double resultF = f(3.0);
    printf("Result of a(): %d\n", resultA);
    printf("Result of f(3.0): %f\n", resultF);
    return 0;
}
