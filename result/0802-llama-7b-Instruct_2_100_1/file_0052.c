
#include <stdio.h>

int a() {
    int i = 2;
    int j = i % 3;
    i = i % i;
    return i - j * j - i * j + i + 1;
}

int main() {
    int result = a();
    printf("Result of function a(): %d\n", result);
    return 0;
}
