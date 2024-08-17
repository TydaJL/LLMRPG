
#include <stdio.h>

void a() {
    char *p = NULL, *q = NULL;
    int x = 5;

    for (; p && p[0]; p = p - sizeof(*q)) {
        q += x;
        q[x] = p ? q[0] + p : '\0';
    }

    p = q - sizeof(int);
    x -= 2;

    for (; x > -1 && p != q; p++) {
        if ((*q == '\0') && (*p == ' ')) {
            break;
        }
        p = p + 1;
    }
}

int main() {
    a();
    return 0;
}
