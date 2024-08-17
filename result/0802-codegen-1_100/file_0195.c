
#include <stdio.h>

int a() {
    for (int i = 0; i < 100; i++) {
    }
    return 0;
}

int b(int i) {
    if (i == 0) {
        return 1;
    } else {
        return i * b(i - 1);
    }
}

int main() {
    a();
    int result = b(5);
    printf("Factorial of 5 is %d\n", result);
    return 0;
}
