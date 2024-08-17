
#include <stdio.h>

void a() {
    char *b;
    b = "Hello";
    printf("Hello world, %c\n", b[4]);
    puts(b);
}

int main() {
    a();
    return 0;
}
