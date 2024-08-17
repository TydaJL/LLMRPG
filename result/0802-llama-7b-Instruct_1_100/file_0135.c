
#include <stdio.h>

int a() {
    float x;
    double s = 3.0;
    long long c = 6 / 1 * 5;
    x = 1 * 3 - 4 + s * s + 7 * 2 - s;
    s = s / 5 / (8 - c);
    return (int)(2 - x);
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
