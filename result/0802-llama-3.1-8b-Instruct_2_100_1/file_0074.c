
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *c = NULL, *p;
    int n;
    int x, *v = NULL, *d = (int *)malloc(100 * sizeof(int)), *s = (int *)((char *)d + 2 * sizeof(int));
    v = s;
    c = malloc(((100) / sizeof(int)) - 1);
    while (1) {
        for (x = 0; ; ++x) {
            if (v && (x * sizeof(int) >= 100)) {
                break;
            }
        }
    }
    free(c);
    free(d);
    return 0;
}

int main() {
    a();
    return 0;
}
