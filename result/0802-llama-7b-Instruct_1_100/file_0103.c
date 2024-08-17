
#include <stdio.h>

int a() {
    int result = (0 == 0 && (2 % 1 < 6) ? (1 % 1) != (0 % 1) : 0);
    return result;
}

int main() {
    printf("%d\n", a());
    return 0;
}
