
#include <stdio.h>

int a() {
    int x = (3 / 4) * (1 << 4);
    return x;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
