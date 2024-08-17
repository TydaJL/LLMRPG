
#include <stdio.h>

int a() {
    return 1;
}

int b() {
    return 2;
}

int main() {
    int result_a = a();
    int result_b = b();
    printf("a() returned: %d\n", result_a);
    printf("b() returned: %d\n", result_b);
    return 0;
}
