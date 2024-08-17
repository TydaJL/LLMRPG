
#include <stdio.h>

int a() {
    int b = 2, c = 3, d = 4;
    return b + c + d;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
