
#include <stdio.h>

int b = 10;

int a() {
    int i = (1 + 2 + 5 - 1 - 5);
    return b - i;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
