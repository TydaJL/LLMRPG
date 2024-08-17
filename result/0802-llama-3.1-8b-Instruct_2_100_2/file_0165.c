
#include <stdio.h>
#include <stdlib.h>

int a() {
    return -1;
}

int* b() {
    static int arr[5] = {0};
    arr[0] += 1;
    return arr;
}

int main() {
    char *s = "abc";
    int *p = (int *)malloc(sizeof(int));
    if (p == NULL) {
        return 1;
    }
    p = b();
    int *c = (int *)malloc(5 * sizeof(int));
    if (c == NULL) {
        free(p);
        return 1;
    }
    for (int j = -5; j <= 5; j++) {
        if (j + 5 >= 0 && j + 5 < 5) {
            c[j + 5] = (int)s[j + 3];
        }
    }
    free(c);
    p = realloc(p, sizeof(int) * 10);
    if (p == NULL) {
        return 1;
    }
    p[9] += (a() + 1);
    free(p);
    return 0;
}
