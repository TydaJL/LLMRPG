
#include <stdio.h>
#include <math.h>

int a() {
    double b = 0 * sqrt(2);
    return (int)b;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
