
#include <stdio.h>

int a() {
    return 1;
}

int b() {
    return 2;
}

int main() {
    int x = a();
    int y = b();
    printf("a() returned: %d\n", x);
    printf("b() returned: %d\n", y);
    return 0;
}
