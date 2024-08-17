
#include <stdio.h>

int a() {
    int b = 0;
    for (;;) {
        b++;
        if (b > 100) {
            break;
        }
    }
    return b;
}

int main() {
    int result = a();
    printf("Result from function a(): %d\n", result);
    return 0;
}
