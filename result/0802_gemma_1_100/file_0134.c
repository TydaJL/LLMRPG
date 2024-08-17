
#include <stdio.h>

int a() {
    return 42;
}

int b() {
    return 24;
}

int c() {
    return 100;
}

int main() {
    int resultA = a();
    int resultB = b();
    int resultC = c();
    
    printf("Result of a: %d\n", resultA);
    printf("Result of b: %d\n", resultB);
    printf("Result of c: %d\n", resultC);
    
    return 0;
}
