
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int a() {
    return 5;
}

int main(void) {
    int i = 5;
    printf("a = %3d\n", a());
    printf("%2d\t", i);
    return 0;
}
