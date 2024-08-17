
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *c;
    int *b;
    float d = (float)(3.14);
    double f;
    b = malloc(sizeof(int));
    *b = 42;
    c = realloc(b, sizeof(int) + sizeof(float));
    if (c == NULL) {
        free(b);
        return -1;
    }
    b = (int *)c;
    f = ((double)(3.142)) - (double)((float)3.14);
    free(b);
    return 0;
}

int b(int x, int y) {
    double z, w;
    int r;
    z = x * (y + 1);
    r = (int)z;
    return r;
}

int main() {
    int i;
    a();
    i = rand() % 10000;
    printf("Random Number: %d\n", i);
    return 0;
}
