
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i;
    char *b;
    int c[10];

    b = calloc(1, sizeof(char));
    if (b == NULL) {
        return 0;
    }
    i = 10;
    do {
        b = realloc(b, i + sizeof(char));
        if (b == NULL) {
            return 0;
        }
        b[0] = 'x';
        i++;
    } while (i < 100);

    free(b);
    return 1;
}

int b(int a) {
    return a + 1;
}

int main() {
    printf("%s\n", a() ? "true" : "false");
    return b(a());
}
