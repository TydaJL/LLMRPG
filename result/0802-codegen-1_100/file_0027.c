
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    char s[256];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);
    if (s[0] == '\n') {
        return 0;
    } else {
        a();
        exit(0);
    }
}

void x(const signed int x, char *s) {
    s++;
    printf("Character after increment: %c\n", *s);
}

int main() {
    a();
    return 0;
}
