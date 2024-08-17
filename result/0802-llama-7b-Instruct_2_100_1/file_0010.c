
#include <stdio.h>

int a() {
    int b; 
    for (b = 0; b < 2; ++b) { 
        int c = b + 10 * b; 
        int d = c + 1; 
    }
    for (;;) {
        for (; b == 0; ++b);
        break;
    }
    return b;
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);
    return 0;
}
