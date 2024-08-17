
#include <stdio.h>

int a() {
    return 42 * 2 - 1 / (1 - 0 + 42) * (-42 + 42 * 1);
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
