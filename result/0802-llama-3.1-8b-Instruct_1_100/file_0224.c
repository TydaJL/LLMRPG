
#include <stdio.h>

void a() {
    char s[256];
    snprintf(s, sizeof(s), "Hello, World!");
    printf("%s\n", s);
}

int main() {
    a();
    return 0;
}
