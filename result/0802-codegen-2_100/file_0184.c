
#include <stdio.h>
#include <stdlib.h>

int a() {
    int i = 1;
    char c = 'd';

    int* p = (int*) malloc(sizeof(int) * 2);
    p[0] = 0;
    p[1] = 1;

    float f = 0.0f;
    char* p1 = "a string";

    printf("%d %c\n", p[0], c);
    printf("%d\n", p[1]);

    free(p);
    return 0;
}

int main() {
    return a();
}
