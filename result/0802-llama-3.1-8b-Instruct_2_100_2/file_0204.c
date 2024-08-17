
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *s = malloc(1024);
    if (s == NULL) return -1;
    for (int i = 0; i < 10000; i++) {
        for (int j = 0; j <= i; j++) {
            for (char c = 'a'; c < 'd'; c++) {
                if (j * 3 + i < 1024) {
                    s[j * 3 + i] = (char)((int)c % (i + j + 1)) + j;
                }
            }
        }
    }
    free(s);
    return 0;
}

int b() {
    int *n = malloc(sizeof(int));
    if (n == NULL) return -1;
    *n = 0;
    free(n);
    return 0;
}

int main() {
    a();
    b();
    return 0;
}
