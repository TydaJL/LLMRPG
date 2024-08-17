
#include <stdio.h>

int a() {
    int x = 0;

    if (x == 1) {
        printf("%s\n", x ? "true" : "false");
    }
    return x;
}

int main() {
    printf("\n%d\n", a());
    return 0;
}
