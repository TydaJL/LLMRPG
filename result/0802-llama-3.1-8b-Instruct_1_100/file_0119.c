
#include <stdio.h>

int a() {
    int n = 100;
    int b = n * 2;
    return b;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
