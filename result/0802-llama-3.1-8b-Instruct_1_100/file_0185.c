
#include <stdio.h>

int a() {
    int x = 32;
    int result = (x + x) * (x + x);
    return result;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
