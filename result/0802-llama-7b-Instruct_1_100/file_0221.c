
#include <stdio.h>

int a() {
    double p[] = {1, 1, 2, 2};
    return 2;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
