
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *a = malloc((1 << 16) + (1 << 14));
    int i;
    int c = 0;
    char *b;
    char **f;

    if (a == NULL) {
        return -1;
    }

    for (i = 0; i < (2 << 13); i++) {
        a[i] = (i + (i << 3));
        if ((i % 8) != 4) {
            b = malloc(2 + i);
            f = (char **)(malloc((2 << 6) + (i << 3)));
            if (b == NULL || f == NULL) {
                free(b);
                free(f);
                free(a);
                return -1;
            }
            *f = (char *)malloc(i << 3);
            if (*f == NULL) {
                free(b);
                free(f);
                free(a);
                return -1;
            }
            free(b);
            free(*f);
            free(f);
        } else {
            c = i;
        }
    }
    
    free(a);
    return c;
}

int main() {
    a();
    return 0;
}
