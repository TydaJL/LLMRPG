
#include <stdio.h>

int a() {
#if defined(__INT_MAX__)
    printf("Else case\n");
#else
    printf("a\n");
#endif
    return 0;
}

void f() {
    printf("Function f\n");
}

int main() {
    a();
    f();
    return 0;
}
