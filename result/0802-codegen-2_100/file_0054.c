
#include <stdio.h>
#include <stdlib.h>

int a() {
    printf("a()\n");
    return 5;
}

void b() {
    for (size_t x = 0; x < 3; ++x) {
        printf("\nb()");
    }
}

int c() {
    printf("\nc()");
    return 0;
}

int d() {
    printf("\nd()\n");
    return 2;
}

int main() {
    printf("\nM A S T\n");
    a();
    b();
    c();
    d();
    return 0;
}
