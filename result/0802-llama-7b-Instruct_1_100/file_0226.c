
#include <stdio.h>

int a() {
    float c = 5 * 3 / 6.0 - 0 * (8) / (5);
    return (int)c;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
