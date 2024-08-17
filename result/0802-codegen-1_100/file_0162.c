
#include <stdio.h>
#include <stdlib.h>

int a() {
    return 1;
}

int main() {
    int b[1];
    int *c;
    c = (int *)malloc(sizeof(int));
    if (c == NULL) {
        return 1;
    }
    c[0] = 0;
    b[0] = a();
    printf("Value of c[0]: %d\n", c[0]);
    printf("Value of b[0]: %d\n", b[0]);
    free(c);
    return 0;
}
