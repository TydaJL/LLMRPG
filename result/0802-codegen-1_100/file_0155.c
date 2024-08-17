
#include <stdio.h>

int a() {
    printf("[ a function returns ] [ %d in c ]\n", 0);
    return 0;
}

void f() {
    printf("Function f called\n");
}

void b() {
    printf("Function b called\n");
}

int main() {
    a();
    f();
    b();
    return 0;
}
