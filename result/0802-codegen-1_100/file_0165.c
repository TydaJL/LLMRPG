
#include <stdio.h>

int a() {
    double x = 0.0;
    int y = 1, z = 0;

    x = (x + x * 2) % 2;

    y = (y / (y + 1)); // This will always result in 0

    for (x = 2; x > 1; x--) {
        z = (int)(y * x * x) - y;
    }

    return z;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
