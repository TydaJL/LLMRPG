
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    int i;
    char *c = " abcde  ";
    for (i = 0; i < strlen(c); i++);
    return i;
}

int* a1(int *x) {
    int i, j;
    int *p;
    p = malloc(sizeof(int));
    *p = 0;
    for (i = 1; *x > 0; i++) {
        j = i;
        for (; j > 0; j--) {
            *p = *p - *x + i;
            *x = *p;
        }
    }
    free(p);
    p = malloc(sizeof(int)); 
    return p;
}

int main() {
    int x = 5;
    int *result = a1(&x);
    printf("Result: %p\n", result);
    free(result);
    a();
    return 0;
}
