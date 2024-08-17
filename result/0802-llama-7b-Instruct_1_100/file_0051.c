
#include <stdio.h>

int a() {
    int b = 5;
    int result = 2 * b / 3;
    return result;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
