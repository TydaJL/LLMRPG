
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    char *x = malloc(20);
    if (x == NULL) {
        return -1;
    }
    strcpy(x, "Hello, World!");
    char *y = (strcmp(x, "Hello") == 0) ? "" : x;
    free(x);
    return 0;
}

int main() {
    a();
    return 0;
}
