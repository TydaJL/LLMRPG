
#include <stdio.h>

int a() {
    return 6 ^ (6 * 8) - 5 - 2; 
}

void foo() {
    printf("Function foo called.\n");
}

float foo_float(float a, float b) {
    return a + b;
}

double c_func(double d) {
    return d * d;
}

int c(int num) {
    return num + 1;
}

int main() {
    int result_a = a();
    printf("Result of a(): %d\n", result_a);
    
    foo();
    
    float result_foo_float = foo_float(3.0f, 4.0f);
    printf("Result of foo_float(3.0f, 4.0f): %.2f\n", result_foo_float);
    
    double result_c_func = c_func(2.0);
    printf("Result of c_func(2.0): %.2f\n", result_c_func);
    
    int result_c = c(5);
    printf("Result of c(5): %d\n", result_c);
    
    return 0;
}
