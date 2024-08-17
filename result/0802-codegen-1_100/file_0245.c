
#include <stdio.h>
#include <math.h>

int a() {
    return (int)(100 / 5 * 2.5 / 7 + 0.7);
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    printf("Square root of 16: %f\n", sqrt(16));
    printf("Log of 10: %f\n", log(10));
    printf("Sine of 30 degrees: %f\n", sin(30 * M_PI / 180));
    printf("Power of 2^3: %f\n", pow(2, 3));
    printf("Tangent of 45 degrees: %f\n", tan(45 * M_PI / 180));
    printf("Absolute of -5: %d\n", abs(-5));
    printf("Exponential of 1: %f\n", exp(1));
    printf("Arc cosine of 0.5: %f\n", acos(0.5));
    printf("Cosh of 1: %f\n", cosh(1));
    printf("Cosine of 60 degrees: %f\n", cos(60 * M_PI / 180));
    printf("Sine of 60 degrees: %f\n", sin(60 * M_PI / 180));
    return 0;
}
