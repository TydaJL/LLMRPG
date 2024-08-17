
#include <stdio.h>

void a() {
    const char *s;
    s = "world";
    printf("hello %s\n", s);
}

int main() {
    a();
    return 0;
}
