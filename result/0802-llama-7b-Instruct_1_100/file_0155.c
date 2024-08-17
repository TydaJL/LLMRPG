
#include <stdio.h>

int a() {
    return (3 << 1) * 4 % 7;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
