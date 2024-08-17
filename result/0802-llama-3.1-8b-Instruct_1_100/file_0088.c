
#include <stdio.h>

int a() {
    int x, y;
    x = 5;
    y = 10;
    return x + y;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
