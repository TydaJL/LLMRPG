
#include <stdio.h>

int a() {
    float b[10];
    int e = 0, f = 5;
    b[1] = 4.0;
    return e + f * b[1] + f * 7 * (2 + 3);
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
