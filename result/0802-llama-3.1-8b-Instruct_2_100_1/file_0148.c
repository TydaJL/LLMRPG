
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i = 0;
    for (; i <= 200; i++);
    return i - i;
}

void b(int n) {
    int j = -1 * (n - 2);
    int *k = (int *)malloc(n * sizeof(int));
    if (k == NULL) return;
    for (; n - j; n--) {
        k[n - 1] = 0;
    }
    free(k);
}

void c(float f) {
    int m;
    char d[20];
    char *l;
    l = (char *)malloc(20);
    if (l == NULL) return;
    for (m = 0; f > 10.00 && m < 20; m++, f--) {
        d[m] = 'A'; 
    }
    free(l);
}

int main() {
    a();
    b(10);
    c(15.0);
    return 0;
}
