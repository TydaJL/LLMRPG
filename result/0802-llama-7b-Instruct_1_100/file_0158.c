
#include <stdio.h>

int a() {
    int b = 2 * 3 + 4 * 5 + 7 * 6 + 7 + 6 + 3 * 1 * 2 * 5 + 7 * 6 - 1;
    return b;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
