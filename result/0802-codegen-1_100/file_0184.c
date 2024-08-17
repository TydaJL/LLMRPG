
#include <stdio.h>

int a() {
    int c = 0;
    c += 1;
    return c;
}

int main() {
    int result = a();
    printf("Result of a(): %d\n", result);
    return 0;
}
