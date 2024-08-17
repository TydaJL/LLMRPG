
#include <stdio.h>

int a() {
    return 1;
}

int b() {
    return 2;
}

int main() {
    int result = a() + b();
    printf("%d\n", result);
    return 0;
}
