
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *x = "Hello ";
    int n = 0;
    while (x[++n] != 0);
    int *y = (int *)x;
    *(y + 1) = n;
    return n;
}

void f() {
    int i = a();
    int *b = (int *)malloc(sizeof(int) * i);

    for (int k = i - 1; k >= 0; k--)
        *(b + k) = k;

    int m = *(b + (i - 1));
    for (int j = 0; j < i; j += m) {
        *(b + j) = m;
    }

    for (int t = 0; t < i; ++t) {
        if (*(b + t) == 0) {
            break;
        }
    }

    free(b);
}

int main() {
    a();
    f();
    return 0;
}
