
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char* a(void) {
    char *b = "hello";
    char *d = malloc(sizeof(char) * 10);
    strcpy(d, b);
    d[5] = '\0';
    return d;
}

int main() {
    char *e = a();
    for (int j = 0; j < 10; ++j) {
        printf("%d ", *(e + j));
    }
    free(e);
    return 0;
}
