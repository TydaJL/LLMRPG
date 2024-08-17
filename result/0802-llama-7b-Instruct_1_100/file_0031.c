
#include <stdio.h>

int a() {
    return 1 && (2 / (1 / ((3 * 2 - (4 + 4 / (2) / 2))) + 4) + 1 - 5);
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
