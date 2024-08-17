
#include <stdio.h>

int a() {
    printf("hello, world!\n");
    return 0;
}

int main(void) {
    a();
    printf("Function a returned: %d\n", a());
    return 0;
}
