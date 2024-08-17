
#include <stdio.h>

int a() {
    return 42;
}

int b() {
    return 24;
}

int c() {
    return 12;
}

int main() {
    int val_a = a();
    int val_b = b();
    int val_c = c();
    
    printf("Value from a: %d\n", val_a);
    printf("Value from b: %d\n", val_b);
    printf("Value from c: %d\n", val_c);
    
    return 0;
}
