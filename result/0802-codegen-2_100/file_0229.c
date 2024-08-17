
#include <stdio.h>

int a() {
    return 10;
}

int b(int x) {
    return x - 2;
}

int c(int x) {
    return x * x;
}

int main() {
    int a_val, b_val;
    float f;

    a_val = a();
    b_val = b(a_val);
    f = 1.1;
    a_val = c(a_val);
    printf("a = %i\n", a_val);
    
    return 0;
}
