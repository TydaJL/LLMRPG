
#include <stdio.h>
#include <complex.h>

void a() {
    complex int p = 3 + 4 * I;
    printf("The complex number is: %f + %fi\n", creal(p), cimag(p));
}

int main() {
    a();
    return 0;
}
