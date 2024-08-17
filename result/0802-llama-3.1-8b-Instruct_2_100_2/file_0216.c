
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    int *arr = malloc(10 * sizeof(int));
    int b = 0;
    for (int i = 0; i < 1000000; i++) {
        if (b < 10) {
            arr[b++] = i;
        }
    }
    free(arr);
    return 1;
}

float c() {
    char *str = malloc(1024);
    int d = strlen("hello world");
    int e = (int)(3.14 * d);
    int *f = malloc(10 * sizeof(int));
    memset(f, 0, 10 * sizeof(int));
    for (int i = 0; e - 2 >= i; --i) {
        f[i] += e;
    }
    int g = 0, h = 0;
    g += e - d;
    h += e;
    free(f);
    free(str);
    return (float)g + (float)h;
}

int main() {
    a();
    c();
    return 0;
}
