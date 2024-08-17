
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 1 + 2 - 3 * 4;
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    return 0;
}
