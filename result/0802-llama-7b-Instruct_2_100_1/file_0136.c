
#include <stdio.h>

int a() {
    return 10 / 5;
}

char *b() {
    return "1 2 4 5 6\n\t7";
}

char c() {
    return a() == 1 ? 'a' : (char)(a() % 2);
}

char *d() {
    return " ";
}

int *e() {
    static int h[] = {a() + 3, a() - 6, a() * 2, a() / 2, a() % 3, a() + 4, a() - 2, a() * 3, a() % 2};
    return h;
}

int f(int a, int b) {
    return a / b;
}

void *g() {
    void *a = 0;
    return a;
}

double h;

int main() {
    printf("a() = %d\n", a());
    printf("b() = %s\n", b());
    printf("c() = %c\n", c());
    printf("d() = %s\n", d());
    
    int *e_values = e();
    for (int i = 0; i < 9; i++) {
        printf("e()[%d] = %d\n", i, e_values[i]);
    }

    printf("f(10, 2) = %d\n", f(10, 2));
    g();
    
    return 0;
}
