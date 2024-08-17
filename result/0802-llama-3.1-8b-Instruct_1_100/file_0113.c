
#include <stdio.h>

float functionA() {
    return 123.0;
}

int functionB(float a, int b, char c) {
    printf("Float: %f, Int: %d, Char: %c\n", a, b, c);
    return 0;
}

int main() {
    float resultA = functionA();
    functionB(resultA, 10, 'A');
    return 0;
}
