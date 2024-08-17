
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *c;
    int *i;
    double b[3] = {1, 1.5 * 2, -3};
    c = malloc((sizeof(char)) * (1 * (2 * (-(sizeof(char) + 0)) + 2) + ((sizeof(char *)) + 4 + sizeof(char *)))));
    if (c == NULL) {
        return -1;
    }
    i = malloc(sizeof(int));
    if (i == NULL) {
        free(c);
        return -1;
    }
    free(c);
    free(i);
    return 0;
}

int main() {
    a();
    return 0;
}
