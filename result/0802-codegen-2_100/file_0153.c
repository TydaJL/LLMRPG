
#include <stdio.h>

int a() {
    return 0;
}

int b() {
    double d = 0.0;
    return (int)d;
}

int main() {
    printf("%d\n", b());
    return 0;
}
