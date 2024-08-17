
#include <stdio.h>

int a() {
    int x = 10;
    int y = 20;
    int i = 30;
    int z = x + y + i;
    return z;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
