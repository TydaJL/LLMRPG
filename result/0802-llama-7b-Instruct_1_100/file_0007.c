
#include <stdio.h>

int a(int b, int c) {
    return (b + 3 * 1 > c) || (b == 0);
}

int main() {
    int b = 5;
    int c = 10;
    int result = a(b, c);
    printf("Result: %d\n", result);
    return 0;
}
