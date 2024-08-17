
#include <stdio.h>

int a() {
    return 4 % 5;
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    return 0;
}
