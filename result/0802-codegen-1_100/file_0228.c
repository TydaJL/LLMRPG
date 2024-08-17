
#include <stdio.h>

int a() {
    return 2 + 2 + 2 * 5 * 2 - 10 * 3 * (4 + 3 - 4) + (5 / 8 < (10 * 2)) + 2;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
