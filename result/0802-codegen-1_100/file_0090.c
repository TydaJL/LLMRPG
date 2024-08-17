
#include <stdio.h>

int a() {
    printf("Function a called\n");
    return 0;
}

void c() {
    printf("Function c called\n");
}

int main() {
    a();
    c();
    return 0;
}
