
#include <stdio.h>

int a() {
    printf("Hello world!\n");
    return 0;
}

int b() {
    int i;
    for (i = 0; i < 1000; i++) {
        a();
    }
    return 0;
}

int main() {
    b();
    return 0;
}
