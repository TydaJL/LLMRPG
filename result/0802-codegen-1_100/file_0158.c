
#include <stdio.h>

int a() {
    return 3 / 2 + 4 * 5 / 3 - 4;
}

void b() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("You entered: %d\n", num);
}

void c() {
    printf("Function c called\n");
}

int main() {
    int result = a();
    printf("Result of function a: %d\n", result);
    b();
    c();
    return 0;
}
