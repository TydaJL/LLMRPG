
#include <stdio.h>

void a() {
    char *x = " abcdefghijklmnopqrstuvwxyz # ! & 123 456 ! @ & $ % ^ & ! ! # $ % # ! # ! % & # & ";
    printf("%s\n", x);
}

int main() {
    a();
    return 0;
}
