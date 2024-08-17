
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    char *s = "hello , world  ";
    int len = strlen(s);
    return len;
}

int main(void) {
    int n = a();
    int *p = (int *)malloc(n * sizeof(int));
    int i;

    if (p != NULL) {
        for (i = 0; i < n; i++) {
            *(p + i) = a() * (n - i);
        }
        for (n--; n >= 0; n--) {
            free((void *)(p + n));
        }
    }

    free((void *)p);
    printf("%d\n", n + 1);
    return 0;
}
