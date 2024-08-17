
#include <stdio.h>

int a() {
    printf("a ");
    return 3;
}

int b(int x, int y, int z) {
    printf("b\n");
    return 1;
}

int main() {
    a();
    printf("Hello, world!\n\n");
    b(1, 2, 3);
    return 0;
}
