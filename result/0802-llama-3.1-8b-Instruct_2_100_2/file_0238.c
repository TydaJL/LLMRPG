
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i, *p, j = 1;
    p = (int *)(malloc(sizeof(int)));
    for (i = 0;; i++) {
        if (j > 100000) {
            break;
        }
        *p = j; 
        j++;
    }
    free(p);
    return i;
}

int a1() {
    int i, *p, k = 1000000000, j = 1;
    p = (int *)malloc(sizeof(*p));
    if (p == NULL) return -1;
    *p = 0;
    for (i = 0; i < 10000000; i++) {
        if (*p > k) {
            break;
        } else {
            *p = k;
            k--;
        }
    }
    free(p);
    return i;
}

int main() {
    a();
    a1();
    return 0;
}
