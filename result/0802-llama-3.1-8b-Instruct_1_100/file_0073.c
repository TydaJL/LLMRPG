
#include <stdio.h>

int a() {
    int b = 5;
    return (b + b) * 2;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
