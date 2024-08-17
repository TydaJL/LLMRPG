
#include <stdio.h>
#include <stdlib.h>

int a() {
    char **p = malloc(1 * sizeof(*p));
    if (p == NULL) {
        return -1;
    }
    *p = malloc(10 * sizeof(char));
    if (*p == NULL) {
        free(p);
        return -1;
    }
    free(*p);
    free(p);
    return 0;
}

int main() {
    if (a() != 0) {
        printf("Error in function a()\n");
        return 1;
    }
    return 0;
}
