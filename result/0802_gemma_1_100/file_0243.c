
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

int d() {
    return 5;
}

int main() {
    printf("Function a returned: %d\n", a());
    printf("Function b returned: %d\n", b());
    printf("Function c returned: %d\n", c());
    printf("Function d returned: %d\n", d());
    return 0;
}
