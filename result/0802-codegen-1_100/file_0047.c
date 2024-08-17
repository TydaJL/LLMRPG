
#include <stdio.h>

int a() {
    return 1 % 5 + 5 - 6 + 3 + 4 + 5 + 9 - 3 + 6 - 8 + 1 * 2 / 5;
}

int main() {
    printf("%d\n", a());
    return 0;
}
