
#include <stdio.h>

int a() {
    int b = 0;
    return !b;
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    return 0;
}
