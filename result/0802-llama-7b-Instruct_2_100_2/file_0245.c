
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *i;
    i = (int*)malloc(sizeof(int));
    if (i == NULL) {
        return -1;
    }
    *i = 5 * 2;
    *i *= 10 * 2;
    int result = *i + *i / 2 + 3;
    free(i);
    return result;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
