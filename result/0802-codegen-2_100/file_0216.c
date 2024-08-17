
#include <stdio.h>

int a() {
    return 3;
}

void b(int *j, int k) {
    *j = k + 3;
}

int main() {
    int c = 0;
    int result = a();
    b(&c, 2);
    printf("Result from a(): %d\n", result);
    printf("Value of c after b(): %d\n", c);
    return 0;
}
