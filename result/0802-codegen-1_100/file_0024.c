
#include <stdio.h>

int a() {
    char buf;
    buf = '0';
    printf("%c\n", buf);
    return (buf > 32) ? 64 : 0;
}

int get_char() {
    char x;
    printf("Enter a character: ");
    scanf(" %c", &x);
    return x;
}

int main() {
    char x = get_char();
    if (x) {
        int result = a();
        printf("Result from function a: %d\n", result);
    } else {
        printf("No character input.\n");
    }
    return 0;
}
