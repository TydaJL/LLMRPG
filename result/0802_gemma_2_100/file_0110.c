
#include <stdio.h>

int a() {
    return 42;
}

void b() {
    printf("Function b called\n");
}

void c() {
    printf("Function c called\n");
}

int main() {
    int result = a();
    printf("Result from a: %d\n", result);
    
    b();
    c();
    
    return 0;
}
