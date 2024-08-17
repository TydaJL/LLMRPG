
#include <stdio.h>
#include <math.h>

float a() {
    float pi = 3.14159;
    float result = 13 + 5 * log(4 + 8 * exp(-86));
    return result;
}

int main() {
    float result = a();
    printf("Result: %f\n", result);
    return 0;
}
