
#include <stdio.h>

int a() {
    double b = ((1 % 1) / 2.0 <= (1 + 3 + (1 % 2 % 3)) && (1 >= 1));
    return (int)b;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
