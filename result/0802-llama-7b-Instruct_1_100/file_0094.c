
#include <stdio.h>

int a() {
    return 3;
}

int foo() {
    return 5;
}

int main() {
    int resultA = a();
    int resultFoo = foo();
    printf("Result from a(): %d\n", resultA);
    printf("Result from foo(): %d\n", resultFoo);
    return 0;
}
