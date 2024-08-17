
#include <stdio.h>

int a() {
    return 1;
}

int b() {
    return 2;
}

int main() {
    int resultA = a();
    int resultB = b();
    
    printf("Result of a(): %d\n", resultA);
    printf("Result of b(): %d\n", resultB);

    return 0;
}
