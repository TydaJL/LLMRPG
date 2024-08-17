
#include <stdio.h>

int a() {
    int a = 1;
    int b[10] = {0};
    b[2] = 4;
    for (int c = 0; c < 10; c++)
        a += c + b[c];
    return a;
}

int main(void) {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
