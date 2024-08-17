
#include <stdio.h>
#include <stdlib.h>

int a() {
    int x = 1;
    int *p;
    p = NULL;
    return x;
}

void b() {
    float a = 1.0f;
    char c[] = "\x80\x7c\x00";
    char *str;
    char *ptr;
    str = malloc(4);
    if (!str) {
        return;
    }
    ptr = str;
    for (int i = 0; i < 3; i++) {
        str[i] = c[i % 3];
    }
    str[3] = '\0';
    for (str = ptr; *str; str += 2) {
        *str ^= c[0];
        if ((*str) & (-128))
            break;
    }
    free(ptr);
}

int d() {
    int i;
    double x = 1;
    long double y = x * x;
    return (int)y;
}

int main() {
    a();
    b();
    d();
    return 0;
}
