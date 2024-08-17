
#include <stdio.h>

int a() {
    printf("A \n");
    return 0;
}

int b() {
    return 1;
}

int main() {
    a();
    printf("B %d ", b());
    return 0;
}
