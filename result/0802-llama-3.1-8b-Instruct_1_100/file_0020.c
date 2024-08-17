
#include <stdio.h>

int a() {
    char c[10] = "a string";
    return c[0];
}

int main() {
    int result = a();
    printf("%c\n", result);
    return 0;
}
