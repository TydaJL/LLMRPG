
#include <stdio.h>
#include <stdlib.h>

int a() {
    int n;
    char *str;
    double x;
    int *p;

    n = 5;
    str = (char *)malloc(5 + 1);
    if (str == NULL) {
        return -1;
    }

    str[0] = '0';
    str[1] = '\n';
    str[2] = '1';
    str[3] = '\n';
    str[4] = '1';
    str[5] = '\0';

    x = 5.5;
    p = (int *)malloc(sizeof(int));
    if (p == NULL) {
        free(str);
        return -1;
    }

    *p = n;
    printf("%s", str);
    printf("Value of n: %d\n", *p);
    printf("Value of x: %.1f\n", x);

    free(str);
    free(p);
    return 0;
}

int main() {
    a();
    return 0;
}
