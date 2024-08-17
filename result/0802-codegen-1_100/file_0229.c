
#include <stdio.h>
#include <string.h>

void a() {
    char x[] = "\nHello\0world!!";
    size_t size = sizeof(x);
    x[size - 2] = '!';
    printf("%s\n", x);
}

int main() {
    a();
    return 0;
}
