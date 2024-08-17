
#include <stdio.h>
#include <complex.h>

int a() {
    double complex b = 3.0 + 4.5 * I;
    printf("complex number = ");
    printf("(%f, %f)\n", creal(b), cimag(b));
    return 0;
}

void c() {
    printf("\n");
    printf("Hello World!\n");
}

int main() {
    c();
    a();
    return 0;
}
