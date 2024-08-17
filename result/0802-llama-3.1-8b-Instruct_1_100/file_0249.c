
#include <stdio.h>

void a() {
    char *str = "hello";
    printf("%s\n", str);
}

void b() {
    char *str = "world";
    printf("%s\n", str);
}

int main() {
    a();
    b();
    return 0;
}
