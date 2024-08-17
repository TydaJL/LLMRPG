
#include <stdio.h>

int a() {
    return (2 + 6) >> (4 / 4 / 4) << (3 + 6 + 7 - 5);
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
