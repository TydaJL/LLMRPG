
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    int *x;
    int y = 5;

    for(int i = 1; i < 100000000; i++) {
        x = (int *)malloc(sizeof(int));
        if (x == NULL) {
            return -1;
        }
        *x = i;
        free(x);
    }

    return 0;
}

int b() {
    int *p = NULL;
    int n = 1000000;
    
    p = (int *)malloc(n * sizeof(int));
    if (p == NULL) {
        return -1;
    } else {
        for (int i = 0; i < n; ++i) {
            p[i] = i;
        }
        free(p);
        return 0;
    }
}

int c() {
    char *str = (char *)malloc(10 * sizeof(char));
    if (str == NULL) {
        return -1;
    }
    strcpy(str, "Hello");
    puts(str);
    free(str);
    return 0;
}

int main() {
    a();
    b();
    c();
    return 0;
}
