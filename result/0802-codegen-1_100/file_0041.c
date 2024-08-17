
#include <stdio.h>
#include <stdlib.h>

int a() {
    printf("%d\n", rand());
    return 0;
}

char (*b)(char) = NULL;

char mask_func(char c) {
    return c;
}

int main() {
    a();
    return 0;
}
