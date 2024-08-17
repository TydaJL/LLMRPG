
#include <stdio.h>

int a() {
    return 3 + 7 % (3 + 3 + 3 * 1 / 4) * 6 - 3 / (5 ^ 4 + (3 % 4) * 1) * 8 - 4 / 6 / 2 / (8 ^ 6) * 5 + 6 + 6 / 8 - 8 + 3 - 6 * 1 * (3 / (8 % (6 / 2))) * 7;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
