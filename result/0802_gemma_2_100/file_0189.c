
#include <stdio.h>

int a() {
    printf("Function a called\n");
    return 0;
}

int b(int x) {
    printf("Function b called with argument: %d\n", x);
    return x * 2;
}

int main() {
    a();
    int result = b(5);
    printf("Result from b: %d\n", result);
    return 0;
}
