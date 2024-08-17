
#include <stdio.h>

int a() {
    return (0 || 1) ? 2 : (0 ? 4 : 0);
}

void b() {
    printf("Function b called\n");
}

int main() {
    int result = a();
    printf("a = %i\n", result);
    printf("x = 0 or 1\n");
    b();
    return 0;
}
