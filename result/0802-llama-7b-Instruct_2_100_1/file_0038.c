
#include <stdio.h>

int a() {
    return 1 + 2;
}

int g() {
    return 3 + 4;
}

int h(int n) {
    int r = n;
    if (r < 1) r = 1;
    else r = r / 2;
    return r;
}

int main() {
    int x = 2;
    int y[4] = {0};
    int *i = &x - 1;
    int *r = &x + x;
    int l = 0;
    l = l + l;
    printf("%d\n", 1 + 2 * 3 + x + x * x);
    printf("%d\n", a());
    printf("%d\n", g());
    printf("%d\n", h(x));
    return 0;
}
