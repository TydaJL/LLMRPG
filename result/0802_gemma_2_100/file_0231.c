
#include <stdio.h>

int a() {
    int b, c, d, f;
    b = 1;
    c = 2;
    d = 3;
    f = b + c + d;
    return f;
}

int main() {
    int result = a();
    printf("The sum is: %d\n", result);
    return 0;
}
