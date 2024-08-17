
#include <stdio.h>

int a() {
    char b[] = {3, 'a', 'b', 'c', 0};
    printf("%s\n", b);
    char str[] = "Hello World!";
    printf("%s\n", str);
    return 0;
}

int main() {
    a();
    return 0;
}
