
#include <stdio.h>
#include <stdlib.h>

int a() {
    for (int b = 1; b < 20 + 10 + 20; b = b + 3) {
        int *c = (int *)malloc(sizeof(int) * b);
        if (c == NULL) {
            return -1;
        }
        float d = (((float)((20 + 1) * ((float)(sizeof(char) / 10) / 1) + 1 + ((sizeof(char)) / 2) + (sizeof(long int)) + 10 + 50 + 40)));
        char *e = (char *)malloc((sizeof(int)) / 2);
        if (e == NULL) {
            free(c);
            return -1;
        }
        int f = *e + (sizeof(int)) / 2;
        int g = f - *e;
        free(c);
        free(e);
    }
    return 0;
}

int main() {
    a();
    return 0;
}
