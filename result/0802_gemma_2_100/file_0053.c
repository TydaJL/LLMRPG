
#include <stdio.h>

int a() {
    int b = 1;
    return b;
}

int main() {
    int result;
    result = a();
    printf("Result: %d\n", result);
    return 0;
}
