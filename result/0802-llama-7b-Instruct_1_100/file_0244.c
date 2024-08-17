
#include <stdio.h>

int a(int x, double r) {
    double result = 0;
    for (int i = 0; i < x; i++) {
        result += (r * i / (1 + r * (i + x))) - (x * x) / (i + 1.0);
    }
    return (int)result;
}

int main() {
    int x = 5;
    double r = 2.0;
    int result = a(x, r);
    printf("Result: %d\n", result);
    return 0;
}
