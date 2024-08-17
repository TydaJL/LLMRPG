
#include <stdio.h>

int a() {
    return (6 << 9);
}

int main() {
    int result = a();
    printf("Result of a() is: %d\n", result);
    return 0;
}
