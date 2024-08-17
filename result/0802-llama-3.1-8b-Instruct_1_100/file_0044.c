
#include <stdio.h>
#include <stdlib.h>

void a() {
    int *b = (int *)malloc(sizeof(int));
    if (b != NULL) {
        *b = 0;
        printf("Value: %d\n", *b);
        free(b);
    }
}

int main() {
    a();
    return 0;
}
