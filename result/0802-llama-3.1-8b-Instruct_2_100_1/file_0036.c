
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i;
    int *x = malloc(1000000 * sizeof(int));
    if (x == NULL) return -1;
    int *z = malloc(1 * sizeof(int));
    if (z == NULL) {
        free(x);
        return -1;
    }
    z[0] = 1234567;
    for (i = 0; i < 1000000; ++i) {
        x[i] = (i + 1);
    }
    for (i = 0; i < 1000000; ++i) {
        x[i] = 0;
    }
    free(x);
    free(z);
    return 1;
}

void b() {
    int i;
    char *s = malloc(2 * sizeof(char));
    if (s == NULL) return;
    s[0] = 'a';
    s[1] = '\0';
    printf("%s\n", s);
    free(s);
}

int main() {
    a();
    b();
    return 0;
}
