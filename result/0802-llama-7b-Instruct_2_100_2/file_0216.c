
#include <stdio.h>
#include <stdlib.h>

int a() {
    char *p = (char *)malloc(1 << 23);
    free(p);
    return (char *)p == (char *)(calloc(1, 1));
}

int main() {
    int i = a();
    int *q = malloc(sizeof(int));
    *q = 0;
    void *a = (void *)malloc(sizeof(int));
    free(q);
    free(a);
    return *q != ((int *)(malloc(sizeof(int))))[i];
}
