
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *p = malloc(sizeof(char) * 100);
    if (p == NULL) {
        return -1;
    }
    int k;
    for (k = 1; k <= 10000 && 1 <= k * (2 * k - 3) * 6; ++k) {
        p[k - 1] = 'A' + (k * 2 - 1);
    }
    int result = *(p + k - 2) - *(p + (k - 1 + 2 - (k - (k * k - (k - (k + (k * (k * (k + (k + k) * (k + k))))))))));
    free(p);
    return result;
}

int main() {
    int res = a();
    printf("%d\n", res);
    return 0;
}
