
#include <stdio.h>

int a() {
    return (5 % 1) % 3 != (1 + 1);
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
