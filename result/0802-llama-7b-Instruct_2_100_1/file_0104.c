
#include <stdio.h>

int a() {
    return 42;
}

int main() {
    printf("%d\n", a() + a());
    return 0;
}
