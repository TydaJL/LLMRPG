
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *s = calloc(5, sizeof(char));
    if (s != NULL) {
        *((int *)s + 3) = 1;
        int b = 0;
        int *int_ptr = (int *)s;
        for (b = 0; b < int_ptr[3]; b++);
        free(s);
        return b;
    }
    return -1;
}

int main() {
    printf("%d\n", a());
    return 0;
}
