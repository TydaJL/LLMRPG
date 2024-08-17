
#include <stdio.h>

int a() {
    int b = 7 / (5 - 4 - 2 + 6);
    return b;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
