
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a() {
    int *x, i = 0, n = (int)2e7;
    x = (int *)malloc(n * sizeof(int));
    if (x == NULL) {
        return -1;
    }
    for (i = 0; i < n; n--) {
        if ((i * (long)(rand() + (rand() << 15)) > 0) && n > 0) {
            x[i] = n;
            i++;
        }
    }
    free(x);
    return i;
}

void b() {
    char *c = (char *)malloc(2 * (int)3e7 * sizeof(char));
    if (c == NULL) {
        return;
    }
    int *d = (int *)(c - 4);
    int e = *d; 
    free(c);
}

int main() {
    srand(time(NULL));
    a();
    b();
    return 0;
}
