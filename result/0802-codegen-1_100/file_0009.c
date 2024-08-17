
#include <stdio.h>

int b() {
    return 10;
}

int a() {
    int c = 5;
    return (c + b()) / (c + 1);
}

int main() {
    int result = a() + b();
    printf("Result: %d\n", result);
    return 0;
}
