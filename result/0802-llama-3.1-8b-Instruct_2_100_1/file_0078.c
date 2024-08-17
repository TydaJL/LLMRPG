
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    char *str;
    int b[100];
    int i, count = 0;

    str = malloc(50);
    memset(str, 65, 49);

    for (i = 0; i < 49; i++) {
        str[i] = str[49 - i - 1] + '0';
    }

    free(str);
    return count;
}

int b() {
    int i, n, s = 1, t;
    char *p;
    n = a();
    s *= n;
    t = n;
    p = (char *)malloc(n * sizeof(char));

    for (; t >= 2 && n - t > 3; --t) {
        for (i = t - 1; i >= 0; ++i) {
        }
    }

    free(p);
    return s;
}

int main() {
    a();
    b();
    return 0;
}
