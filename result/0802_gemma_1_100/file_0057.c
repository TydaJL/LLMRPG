
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
    
    printf("Result from a(): %d\n", resultA);
    printf("Result from b(): %d\n", resultB);
    printf("Result from c(): %d\n", resultC);
    
    return 0;
}
