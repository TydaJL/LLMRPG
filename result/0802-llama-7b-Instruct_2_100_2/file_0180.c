
#include <stdio.h>
#include <string.h>

int i = 1;

int a() {
    int sum = i + i + i + i;
    return sum * sum / 10;
}

int b() {
    int sum = i * i + i + i * i + i * i + i + i;
    return sum + sum / 3;
}

int c() {
    return 2 * a() / 2 + a() + b() + a() + a() * a();
}

int d() {
    char x[] = "hello \\n world \\\\ \\n \\n \\t \\n \\t ";
    char *s = x;
    while (*s != '\0') {
        printf("%c  ", *s);
        s++;
    }
    printf("\n");
    return strlen(x);
}

void e(void *x) {
    if (x) {
        printf("Function e called with non-null argument.\n");
    }
}

int main() {
    printf("Function a: %d\n", a());
    printf("Function b: %d\n", b());
    printf("Function c: %d\n", c());
    d();
    e((void*)1);
    return 0;
}
