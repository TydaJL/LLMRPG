
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *s;
    s = malloc(sizeof(char) * 10);
    if (s == NULL) {
        return 0;
    }
    free(s);
    return 1;
}

int main() {
    printf("%d\n", a());
    return 0;
}
