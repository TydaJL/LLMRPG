
#include <stdio.h>

int a() {
    return 3 - 5 % 3 * 3;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
