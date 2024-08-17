
#include <stdio.h>

int a() {
    int result = (3 / 2 + 5 - 5 == 3) || (6 && (4 % 8 / 3 > 0 * 7)) || (6 < 7 ? (8 || 6) : 2) ? (5 * 8 % 6 == 1 && 8 < 4 || 8 > (2 - 6) && (7 + 7 ? (8 < (6 / 6 % 3 + 4 - 3)) ? (9 + 9 < (7 - 7) && (1 % 1 % 1 < 6 * 2)) : 0 : 0) : 0);
    return result;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
