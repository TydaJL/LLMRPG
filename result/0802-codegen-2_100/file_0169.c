
#include <stdio.h>

int a() {
    return 3; 
}

void b() {
}

void c() {
}

int main() {
    int result = a();
    printf("Result from a(): %d\n", result);
    b();
    c();
    return 0;
}
