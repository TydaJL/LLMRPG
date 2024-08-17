
#include <stdio.h>

int a() {
    return 42 - 8 + 9 - 10;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
