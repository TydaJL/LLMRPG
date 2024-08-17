
#include <stdio.h>

int a() {
    int x[] = {2, 5, 8};
    return 5 + 3 * 2 / 2 / 2;
}

float b() {
    float z = 1;
    float y[] = {4, 8};
    float result = y[0] + z;
    return result;
}

int main() {
    int resultA = a();
    float resultB = b();
    printf("Result of a(): %d\n", resultA);
    printf("Result of b(): %.2f\n", resultB);
    return 0;
}
