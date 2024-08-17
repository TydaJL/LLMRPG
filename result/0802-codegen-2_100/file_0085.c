
#include <stdio.h>

int a() {
    return 1 + 2 * 3 / 4 - 5 * (6 + 7) / 8;
}

int f(int a) {
    return (a + 1);
}

int main() {
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    
    printf("Function a returned: %d\n", a());
    printf("Function f(x) returned: %d\n", f(x));
    
    return 0;
}
