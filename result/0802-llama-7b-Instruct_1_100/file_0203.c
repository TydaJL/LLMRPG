
#include <stdio.h>

int a() {
    if (0 != 2 && 3 * 1 + 7 % 6 - 1 < 9 && 8 == 8 && 3 - 1 * 4 * (1 - 0 % 1 * 5 * 6 < 7 - 3 / 8) < 6) {
        return 1;
    }
    return 0;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
