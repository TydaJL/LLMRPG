
#include <stdio.h>

int a() {
    return 10 + 1;
}

struct b {
    int k;
};

int f() {
    struct b *p = NULL;
    int k = a() % (p ? p->k : 1) + 1;
    return k;
}

int main() {
    int result_a = a();
    int result_f = f();
    printf("Result of a: %d\n", result_a);
    printf("Result of f: %d\n", result_f);
    return 0;
}
