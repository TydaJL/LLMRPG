
#include <stdio.h>
#include <math.h>

double sq(double x) {
    return x * x;
}

double a() {
    double r = 2.3;
    double result = (1) + r - (-3.5 - r) / 3 * sq(5.6 + 6.4 * pow(5, 6) * 2 + 9);
    printf("%lf\n", result);
    return result;
}

int main() {
    a();
    return 0;
}
