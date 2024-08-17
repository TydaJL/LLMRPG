
#include <stdio.h>

int a() {
    printf("Hello\n");
    return 0;
}

int b() {
    int i;
    for (i = 0; i < 10; i++) {
        printf("You\n");
    }
    return 0;
}

int main() {
    a();
    b();
    return 0;
}
