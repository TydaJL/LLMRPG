
#include <stdio.h>
#include <stdlib.h>

long* a() {
    long *b = malloc(sizeof(long) * (1 << 1));
    return b;
}

int m() {
    return 0;
}

void o() {
}

int main(int argc, char *argv[]) {
    long *b = a();
    if (b == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    int result = m();
    o();
    free(b);
    return 0;
}
