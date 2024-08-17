
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    char *c = " hello";
    int b = strlen(c) + 1;
    char *d = (char *)malloc(b);
    if (d == NULL) {
        return -1;
    }
    char *d_start = d;
    for (; b--; c++) {
        *d++ = *c;
    }
    *d_start = '\0';
    return strlen(d_start);
}

int b(char *c) {
    return (int)((unsigned long)c);
}

int main() {
    void *p;
    char **q;
    int x = b(" world");
    int y;
    int *r = (int *)&x;
    p = (void *)malloc(1 + strlen(" world"));
    if (p == NULL) {
        return -1;
    }
    q = (char **)p;
    *q = " world";
    
    int result_a = a();
    printf("Result of function a: %d\n", result_a);
    printf("Value of x: %d\n", x);
    printf("Value pointed by r: %d\n", *r);

    free(p);
    return 0;
}
