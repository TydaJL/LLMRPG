
#include <stdio.h>

int a() {
    return 0;
}

float e(int g) {
    return (float)g;
}

void b(float h[1][3][1][3][1]) {
}

int main() {
    int result = a();
    float value = e(result);
    float h[1][3][1][3][1] = {{{{0}}}};
    b(h);
    printf("Result of a: %d\n", result);
    printf("Result of e: %f\n", value);
    return 0;
}
