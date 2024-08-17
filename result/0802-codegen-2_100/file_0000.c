
#include <stdio.h>

int a() {
    int b = 4;
    printf("b is %d\n", b);
    printf("b + 1 is %d\n", b + 1);
    return b;
}

int main(int argc, char *argv[]) {
    int c = a();
    printf("%d\n", c + 1);
    return 0;
}
