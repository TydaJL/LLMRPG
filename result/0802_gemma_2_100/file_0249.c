
#include <stdio.h>

int a() {
    return 5;
}

int b() {
    return 10;
}

int c() {
    return a() + b();
}

int main() {
    int result_a = a();
    int result_b = b();
    int result_c = c();
    
    printf("a() = %d\n", result_a);
    printf("b() = %d\n", result_b);
    printf("c() = %d\n", result_c);
    
    return 0;
}
