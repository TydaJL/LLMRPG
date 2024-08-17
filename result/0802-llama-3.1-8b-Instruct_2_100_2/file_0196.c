
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

int a() {
    char b[13] = "hello, world";
    int c;
    for (c = 1; c <= 1000000; c++) {
        for (int d = 0; d < 100000; d++) {
            b[d % 12] = 'A' + c % 26;
        }
    }
    return strlen(b);
}

int main() {
    int e = a();
    char *mem = malloc(1000000);
    free(mem);
    return e;
}
