
#include <stdio.h>

int a() {
    int i = 1, j = 3, x = 3, y = 4, k = 5;
    return (i / j) % x % y * k;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
