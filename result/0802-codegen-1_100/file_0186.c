
#include <stdio.h>

int a() {
    for (int i = 0; i < 10; i++) {
        printf("Iteration %d\n", i);
    }
    return 0;
}

void b() {
    printf("Function b called\n");
}

void c() {
    printf("Function c called\n");
}

int main() {
    a();
    b();
    c();
    return 0;
}
