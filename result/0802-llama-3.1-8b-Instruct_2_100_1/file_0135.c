
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *c = (char *)calloc(10, sizeof(char));
    int *i = (int *)malloc(10 * sizeof(int));
    for (int x = 0; x < 5; x++) {
        i[x] = 0; 
        i[x] *= 2;
        if (!(i[5 - x])) {
            free(c);
            free(i);
            return x;
        }
    }
    free(c);
    free(i);
    return 0;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
