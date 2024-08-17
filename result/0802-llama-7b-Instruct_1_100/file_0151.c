
#include <stdio.h>

double a() {
    float sum = 5;
    float product = 2;
    double i = 1 + 4;
    long x = 6 * i;
    x = x + i;
    sum = 5 * i;
    double j = sum * product;
    return j;
}

int main() {
    double result = a();
    printf("%f\n", result);
    return 0;
}
