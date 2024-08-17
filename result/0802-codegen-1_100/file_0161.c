
#include <stdio.h>

int a() {
    return 5 - 1;
}

int main(void) {
    printf("Hello\n");
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
