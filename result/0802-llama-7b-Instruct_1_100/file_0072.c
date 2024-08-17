
#include <stdio.h>

int a() {
    int x = 5; 
    int a = 0, b = 0, c = 1; 
    while (a + x == 0) { 
        b = 5; 
    }
    a = x + 0; 
    return b; 
}

int b() {
    return 1;
}

int c() {
    return 3;
}

int d() {
    return 0;
}

int main() {
    printf("Function a returned: %d\n", a());
    printf("Function b returned: %d\n", b());
    printf("Function c returned: %d\n", c());
    printf("Function d returned: %d\n", d());
    return 0;
}
