
#include <stdio.h>

int a() {
    return 1;
}

int b(int arg) {
    return arg * arg;
}

int main() {
    int result1 = a();
    int result2 = b(result1);
    printf("Result of a(): %d\n", result1);
    printf("Result of b(a()): %d\n", result2);
    return 0;
}
