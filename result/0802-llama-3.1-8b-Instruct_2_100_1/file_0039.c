
#include <stdio.h>
#include <string.h>

void function1() {
    char b[] = "123 45";
    int i;
    int c[100] = {0};
    char *d;
    for (i = 1; i < strlen(b); i++) {
        d = &b[i - 1];
        if (*d >= '0' && *d <= '9') {
            *d += 3;
        }
    }
}

void function2() {
    char b[] = "456 789";
    int i = 0, j = strlen(b);
    char g[100];
    for (i = 0; j > i && i < 5; i++) {
        g[i] = b[i];
    }
    g[i] = '\0';
    printf("%s\n", g);
}

int main() {
    function1();
    function2();
    return 0;
}
