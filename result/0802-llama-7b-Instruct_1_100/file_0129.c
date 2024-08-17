
#include <stdio.h>

int a() {
    double p = 0;
    int b = 0;
    p = ((b + 1) * p / 3) + 1 / 1.0;
    return (int)(p - b);
}

int main() {
    int result = a();
    printf("Result of a() is: %d\n", result);
    return 0;
}
