
#include <stdio.h>

int a() {
    double d = 0;
    for (int x = 1; d < 0.9999; ++x, d *= (double)(1.0 + 1.0 / (2.0 + x)));
    double b = (d - 0.99);
    int *p = (int *)&b;
    return *(p + 7);
}

int another_function() {
    int i = 0;
    char *s = "Hello, world!";
    char c;

    do {
        --i;
        c = s[i];
        if (c != ' ') {
            break;
        }
    } while (i >= -100);

    return i;
}

int main() {
    a();
    another_function();
    return 0;
}
