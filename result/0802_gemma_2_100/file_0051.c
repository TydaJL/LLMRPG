
#include <stdio.h>

int a() {
    int a = 1 + 2 + 3;
    return a;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
