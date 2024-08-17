
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    int *b, i = 1;
    for(; i <= 10000; ++i) {
        b = malloc(i * sizeof(int));
        if (b == NULL) {
            return -1;
        }
        memset(b, 1, i * sizeof(int));
        b[0] *= (i / (i >= 2 ? b[2 * (i - 1)] : b[i - 1] ? b[i - 1] : b[1]));
        free(b);
    }
    return i;
}

int main() {
    printf("a() returned: %i\n", a());
    return EXIT_SUCCESS;
}
