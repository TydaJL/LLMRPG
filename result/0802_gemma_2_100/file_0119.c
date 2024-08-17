
#include <stdio.h>

int a() {
    return 1;
}

int main() {
    printf("%d\n", a());
    return a();
}
