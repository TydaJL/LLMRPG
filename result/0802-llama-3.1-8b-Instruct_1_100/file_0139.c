
#include <stdio.h>

int a() {
    int n = 0;
    return (!n);
}

int b(int c, const char *e) {
    printf("Integer: %d, String: %s\n", c, e);
    return 0;
}

int main() {
    a();
    b(10, "Hello");
    return 0;
}
