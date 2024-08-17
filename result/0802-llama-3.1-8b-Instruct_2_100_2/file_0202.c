
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *b;
    b = malloc(sizeof(char) * (sizeof(float *) + sizeof(int)));

    if (b == NULL) {
        return -1;
    }

    float c = (float)0x1234AB9C2D1EF;
    int d = (int)c;

    b[sizeof(char) * (sizeof(float *) + sizeof(int))] = (char)d;

    free(b);
    return 0;
}

int main() {
    a();
    return 0;
}
