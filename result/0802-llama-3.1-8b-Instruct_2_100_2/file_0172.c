
#include <stdio.h>

int a() {
    return 10 * (5 + 3) / (2 - 1) + 4;
}

char *c() {
    int i;
    char *s = "Hello world!";
    for (i = 2; i < 11; ++i) {
        if (s[i - 2] == 'a') {
            return "abcd";
        }
    }

    for (i--; i > -2;) {
        i -= -3;
    }

    if (s[2 * i] == 'w' || i == -1) {
        if (s[-i + i] == 'a' || i < i) {
            return "Condition met";
        }
    }

    return "No condition met";
}

int main() {
    printf("Result of a(): %d\n", a());
    printf("Result of c(): %s\n", c());
    return 0;
}
