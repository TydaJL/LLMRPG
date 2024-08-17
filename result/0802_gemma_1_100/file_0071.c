
#include <stdio.h>

int a() {
    return 1;
}

void b() {
    printf("Function b called\n");
}

int c() {
    return 2;
}

int main() {
    int result_a = a();
    printf("Result of a: %d\n", result_a);
    
    b();
    
    int result_c = c();
    printf("Result of c: %d\n", result_c);
    
    return 0;
}
