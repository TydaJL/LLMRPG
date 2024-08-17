
#include <stdio.h>

int a() {
    int x;
    x = 5;
    return x;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
