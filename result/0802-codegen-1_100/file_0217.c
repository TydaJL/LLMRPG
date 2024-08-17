
#include <stdio.h>

int a() {
    return (3 - 3 == 9) ? (2 % 1 < 10 ? (2 - 5 * 1) : (7 != 1 - 9)) : (5 < 9);
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
