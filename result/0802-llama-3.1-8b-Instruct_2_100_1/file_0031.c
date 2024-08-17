
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i, j, k, l;
    char* c = (char *)calloc(1000, sizeof(char));
    if (c == NULL) {
        return -1;
    }
    for (l = 1; l <= 100; l++) {
        for (k = l; k <= 1000; k++) {
            j = (l * k) * k;
            i = (j - l + l + l) * l;
            if (i > j) {
                if (j < 1000) {
                    c[j]++;
                }
            } else {
                if (j < 1000) {
                    c[j]--;
                }
            }
        }
    }
    int s;
    for (s = 1000000; s > 0; s--) {
        if (s > j && s < j + 1000) {
            if (c[s % 1000] < 10000) {
                free(c);
                return c[s % 1000];
            }
        }
    }
    free(c);
    return 0;
}

int main() {
    a();
    return 0;
}
