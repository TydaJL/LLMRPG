
#include <stdio.h>

int a() {
    return -1 + (2 * (3 * (4 - 5)) - 6);
}

float b() {
    float c = 0.5f;
    float d = 0;
    for (int i = -1000; i <= 999999; i++) {
        d = c * i;
    }
    d /= (999999 + 2) / 2.0f;
    float result = d - d / (d * d);
    return result - 1 * result * result * (d - result);
}

double c(double x) {
    double e = 1; 
    while (x > 1 * e) {
        e = e / 3.0;
    }
    return e;
}

int main() {
    a();
    b();
    c(10.0);
    return 0;
}
