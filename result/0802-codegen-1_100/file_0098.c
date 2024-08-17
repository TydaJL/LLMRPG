
#include <stdio.h>

int a() {
    int i;
    for (i = 1; i < 10; i++) {
        if (i < 1) {
            break;
        }
    }
    return i;
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);
    return 0;
}
