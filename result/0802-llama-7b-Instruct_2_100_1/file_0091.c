
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i = 0, j = 0, n = 2;
    int *p = calloc(4, sizeof(int));
    if (p == NULL) return -1;

    for (i = 0; n > 0; n--) {
        p[i] = i + 1;
        i++;
    }
    
    n = 0;
    for (j = 0; j < 4; j++) {
        if (p[j] == j + 1) {
            n++;
        }
    }

    free(p);
    return n;
}

int main() {
    return a();
}
