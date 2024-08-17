
#include <stdio.h>

int a() {
    return 0;
}

void foo() {
    printf("%d\n", (a() + 2 % 5) / 3 - 5 + 1);
}

int main() {
    a();
    foo();
    return 0;
}
