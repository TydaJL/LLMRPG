
#include <stdio.h>
#include <stdlib.h>

int a() {
    int x = 0;
    struct point {
        int x;
        int y;
    } start = {0, 0};
    return x;
}

void test(void *p) {
    int *ptr = (int *)p;
    *ptr = 4;
}

int main() {
    a();
    int value = 0;
    test(&value);
    printf("%d\n", value);
    return 0;
}
