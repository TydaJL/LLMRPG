
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

void e() {
}

int f() {
    return 3;
}

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("Function a returned: %d\n", a());
        b();
        printf("Function c returned: %d\n", c());
        printf("Function f returned: %d\n", f());
    }
    e();
    return 0;
}
