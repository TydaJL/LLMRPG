
#include <stdio.h>

int a() {
    return 1 * 3 % (5) << 1 & (4 / 1 >> 2);
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
