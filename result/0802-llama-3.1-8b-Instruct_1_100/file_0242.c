
#include <stdio.h>

int a() {
    char c = '!';
    return c;
}

int main() {
    int result = a();
    printf("%c\n", result);
    return 0;
}
