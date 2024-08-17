
#include <stdio.h>

int a() {
    return 0 + 0;
}

int main() {
    int b = a();
    printf("%d", b);
    return 0;
}
