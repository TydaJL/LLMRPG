
#include <stdio.h>

int a() {
    static int b = 0;
    b += 5;
    return b * (++b);
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
