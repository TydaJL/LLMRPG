
#include <stdio.h>
#include <stdlib.h>

int a() {
    return (1 + 1);
}

void b(int *p, int n) {
    for (int i = 0; i < n; i++) {
        p[i]++;
    }
}

int main(void) {
    char *str = malloc(100);
    strcpy(str, "Hello World!");

    int n = a();
    b(&n, 1);

    int *p = malloc(sizeof(int));
    p[0] = 3;
    p = realloc(p, sizeof(int));

    int **q = malloc(sizeof(int *));
    *q = p;

    printf("%s\n", str);
    printf("%d\n", n);

    free(str);
    free(p);
    free(q);
    
    return 0;
}
