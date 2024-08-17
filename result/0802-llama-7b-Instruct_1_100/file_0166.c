
#include <stdio.h>

double a() {
    double n = 761483579110;
    return n / 5;
}

void b() {
}

int main() {
    double result = a();
    printf("Result of a(): %f\n", result);
    b();
    return 0;
}
