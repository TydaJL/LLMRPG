
#include <stdio.h>

int a() {
    return 2;
}

int b() {
    return 4;
}

int c() {
    return 6;
}

int main() {
    printf("%d\n", a() + b() + c());
    return 0;
}
