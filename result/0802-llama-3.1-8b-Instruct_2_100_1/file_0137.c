
#include <stdio.h>
#include <math.h>

int a() {
    double x = 1.0;
    double y = x * x + x * x - x * x * x - x * x;
    double z = sqrt(y) + log(10.0) + sin(x);
    return (int)(z * 1000000);
}

int main(void) {
    int result = a();
    printf("Result from function a: %d\n", result);
    return 0;
}
