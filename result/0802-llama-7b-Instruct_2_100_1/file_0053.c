
#include <stdio.h>

int a() {
    return 10 >> 3;
}

int b() {
    return 1 + a();
}

int c() {
    return 10 << 2;
}

int d() {
    return 5;
}

int f() {
    return a() + b() + c() + c() + a();
}

int main() {
    int i = 1 + a();
    printf("%d\n", i);
    printf("%d\n", (0 + 1 + a()) << (1 + a()));
    
    for (i = 10; i < (1 + a()); i += (1 << 1)) {
        printf(" %c ", 'a');
    }

    int e = 10 + 1;
    int f_result = f();
    printf("%d\n", f_result);

    return 0;
}
