
#include <stdio.h>

int a() {
    return 3 - 1;
}

float b(float n) {
    printf("%f\n", n);
    return n;
}

void d(int i, float f) {
    printf("The square of the number is %.5f and %.1f\n", (float)(i * i), f);
}

int main() {
    int result_a = a();
    printf("Result of a: %d\n", result_a);
    
    float result_b = b(2.5);
    printf("Result of b: %f\n", result_b);
    
    d(3, 5.2);
    
    return 0;
}
