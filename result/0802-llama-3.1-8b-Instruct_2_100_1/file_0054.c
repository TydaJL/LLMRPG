
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    int i;
    char *p = malloc(10 * sizeof(char));
    if (p == NULL) {
        return -1;
    }
    for (i = 0; i < 10; i++) {
        p[i] = (char) ('a' + i % 5);
    }
    p = realloc(p, sizeof(char) * (10 + 1));
    if (p == NULL) {
        return -1;
    }
    p[10] = '\0';
    free(p);
    return i * strlen(" a");
}

int main(int argc, char **argv) {
    printf("%d\n", a());
    return 0;
}
