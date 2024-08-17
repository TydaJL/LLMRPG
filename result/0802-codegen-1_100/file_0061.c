
#include <stdio.h>
#include <stdlib.h>

int a() {
    int *ptr[1 + 10 / 3 * 4 * (5 - 8 % 10)];
    printf("Function a called.\n");
    return 0;
}

int main() {
    a();
    return 0;
}
