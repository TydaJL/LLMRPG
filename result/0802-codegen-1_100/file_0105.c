
#include <stdio.h>

int a() {
    return 100 + 50 + 1 - 1 + 1 / 2;
}

int b() {
    return 10; 
}

int c = b() - 1 - 2 / 2 * 4;

int i[1];

int e[3] = {3 - 7, 6, 5};

int main() {
    int resultA = a();
    int resultB = b();
    printf("Result of a(): %d\n", resultA);
    printf("Result of b(): %d\n", resultB);
    printf("Value of c: %d\n", c);
    return 0;
}
