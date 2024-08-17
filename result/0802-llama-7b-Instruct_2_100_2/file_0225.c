
#include <stdio.h>

float a() {
    float b = 0.0;
    for (int x = 0; x < 12; x += 2) {
        for (unsigned int y = 0; y < x; y++) {
            b += y;
        }
    }
    for (int x = 0; x < 12; x++) {
        b += x;
    }
    return b;
}

int main() {
    float result = a();
    printf("%f\n", result);
    return 0;
}
