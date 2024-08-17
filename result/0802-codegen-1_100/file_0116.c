
#include <stdio.h>

int a() {
    return 42 + 13;
}

void b() {
    int d, i, p = 2 + 6;
    int array[3] = {2, 4, 0};
    int *e = NULL;

    d = array[0] + 4;
    array[2] += 6;

    e = &d;
}

int main() {
    printf("Result of a(): %d\n", a());
    b();
    return 0;
}
