
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int a() {
    int i = 0;
    int n = rand() % 100; 
    char* str = (char *)malloc(n);
    char* ptr = str;
    int j;

    if (str == NULL) {
        return -1;
    }

    while (--n > 0) {
        *ptr++ = rand() & 0xFF;
    }

    *ptr = '\0';

    for (j = 1; (j * j) <= (ptr - str); ++j) {
        if ((*(ptr - 1) == j) && (*(ptr + j - 1) == '0')) {
            free(str);
            return rand();
        }
    }

    free(str);
    return rand() & 0xFF;
}

int main() {
    srand(time(0));
    a();
    return 0;
}
