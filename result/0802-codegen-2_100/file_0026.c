
#include <stdio.h>

int a() {
    printf("hello world\n");
    return 0;
}

int b() {
    int c = 1;
    if (c > 2)
        c = 2;
    return c;
}

int stringLength(const char *str) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

int main() {
    a();
    int max = b();
    printf("Max value: %d\n", max);
    const char *exampleString = "Hello, World!";
    int len = stringLength(exampleString);
    printf("Length of string: %d\n", len);
    return 0;
}
