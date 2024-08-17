
#include <stdio.h>

int a() {
    return 1;
}

int b(int c, int d) {
    return c + d;
}

int main() {
    int result = a() + b(1, 2);
    printf("Result: %d\n", result);
    return 0;
}
