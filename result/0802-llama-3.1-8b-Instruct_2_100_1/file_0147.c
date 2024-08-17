
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *b = malloc(sizeof(char) * 2);
    if (b == NULL) return -1;
    int x = 1;
    b[x] = 'A';
    x = x + x;
    if (x < 10)
        return 0;
    else {
        free(b);
        return -x;
    }
}

int f(int n, char *b) {
    int i, k, m;
    k = n;
    m = n * n;
    b[n] = '\0';
    while ((k > 0) && (k < m)) {
        k--;
    }
    return m;
}

int main() {
    int c, y;
    y = 0;
    c = a();
    printf("%d\n", c);
    return 0;
}
