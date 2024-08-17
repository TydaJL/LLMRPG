
#include <stdio.h>

int a() {
    return 4 * (4 * (1 + (3 * 3) * 4) / 3 * 7 / 6) * 4 * 5 - 3 * ((3 + ((3 / 4) * 3) * 6 * 3) * 4 + 6 + 7) - 5 * 7 / 3 * 5 % 4 + 1 / 4 - (1 / 3) + (1) * 1);
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
