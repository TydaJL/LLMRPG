
#include <stdio.h>

int a() {
    return 2 ^ 3;
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    return 0;
}
