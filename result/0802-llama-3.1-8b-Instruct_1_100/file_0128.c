
#include <stdio.h>

void a() {
    char str[] = "Hello!";
    int b = 0;
    while (str[b] != '\0') {
        printf("%c", str[b]);
        b++;
    }
    printf("\n");
}

int main() {
    a();
    return 0;
}
