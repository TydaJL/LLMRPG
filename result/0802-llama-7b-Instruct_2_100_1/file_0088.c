
#include <stdio.h>

float a() {
    float b = 0.;
    float c = 0.;
    for (int x = 1; x != 41; x += 1) {
        for (float d = 0.; d <= 1.; d += 0.1) {
            c += d * b * b * d;
        }
    }
    return c;
}

int main() {
    float b;
    float result_a = 0;
    for (b = 0; b < 4; b += 1) {
        result_a += (b + b);
    }

    float func_a = a();
    printf("a %f %d \n\n %f %f %f %f\n", result_a + result_a, 20 + 10, result_a - result_a - result_a, func_a, func_a);
    return 0;
}
