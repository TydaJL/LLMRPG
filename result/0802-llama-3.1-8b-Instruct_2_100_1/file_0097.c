
#include <stdio.h>
#include <stdlib.h>

void a() {
    char *s = malloc(sizeof(char) * 1000);
    for (long i = 1; i <= 10000; i++) {
        for (int j = 0; j < i; ++j) {
            if (j < 1000) {
                s[j] = 'a';
            }
        }
        for (long k = i; k >= 0; --k) {
            if (k < 1000 && !(k & 1))
                s[k] = '\0';
        }
        s[0] = ' ';
        for (long m = 0; m < i && m < 1000; ++m) {
            s[m] = ' ';
        }
        int c = i;
        while (c < 1000 && s[c] == ' ') {
            ++c;
        }
        int l = i + 2;
    }
    free(s);
}

int main() {
    a();
    return 0;
}
