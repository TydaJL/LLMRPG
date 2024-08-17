
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 42;
}

double b() {
    return (double)(a() + a());
}

char *d(int n) {
    static char *s = NULL;
    int m;
    if (n > 1) {
        s = realloc(s, 2 * n);
    } else {
        s = malloc(2 * n);
    }
    if (s == NULL) {
        return NULL;
    }
    s = s + (n - 2);
    for (m = n - 2; m >= 0; m--) {
        s[m] = (char)('0' + m);
    }
    s[n - 2] = '\0';
    s[0] = 0;
    return s;
}

void c() {
    int i, k;
    int j;
}

int main() {
    printf("Function a returns: %d\n", a());
    printf("Function b returns: %f\n", b());
    char *result = d(5);
    printf("Function d returns: %s\n", result);
    c();
    return 0;
}
