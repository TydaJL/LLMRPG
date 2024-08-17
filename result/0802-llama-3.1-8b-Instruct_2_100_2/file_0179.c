
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i, j, k;
    char* str = malloc(sizeof(char) * 10);

    for (i = 0; i < 10; i++) {
        for (j = 1; j < 10 - i; ++j) {
            for (k = 1; i + 2 * j + k > 10; ++k) {
                str[i] = (char)('a') + i * (j * k);
                if (i + 2 * j + k <= 10) break; 
            }
        }
    }
    free(str);
    return 1;
}

int b() {
    return a();
}

int c() {
    char *str;
    str = (char *)malloc(100);
    free(str);
    return 1;
}

int main() {
    a();
    b();
    c();
    return 0;
}
