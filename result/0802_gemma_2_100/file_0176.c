
#include <stdio.h>

int a() {
    return 1;
}

void b() {
    printf("hello world\n");
}

int main() {
    b();
    int result = a();
    return 0;
}
