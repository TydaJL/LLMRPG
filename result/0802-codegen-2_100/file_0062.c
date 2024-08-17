
#include <stdio.h>

int a() {
    int b = 2;
    int c;
    scanf("%d", &c);
    return c;
}

int main(void) {
    printf("Hello world!\n\n");
    int result = a();
    printf("You entered: %d\n", result);
    return 0;
}
