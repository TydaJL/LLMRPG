
#include <stdio.h>

float a() {
    float sum = 0.0;
    for (int i = 0; i < 10; i++) {
        sum += i * 1.0; 
    }
    return sum;
}

float foo(float b) {
    if (b <= 0) {
        return 0;
    } else {
        return b / 2 + foo(b - 1);
    }
}

int main() {
    float result_a = a();
    printf("Result of a(): %f\n", result_a);
    
    float result_foo = foo(10);
    printf("Result of foo(10): %f\n", result_foo);
    
    return 0;
}
