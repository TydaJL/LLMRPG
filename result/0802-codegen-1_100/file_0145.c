
#include <stdio.h>

int a() {
    int r = -31 - 2;
    int v = 100 + 32;
    return r + v;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
