
#include <stdio.h>

int a1() {
    int c = 1;
    int i = 10 + c * 5;
    while (++i < 20) {
    }
    return i;
}

int a2() {
    int c = 1;
    int i = 10 + c * 5;
    while (++i < 20) {
    }
    return i;
}

int a3() {
    int c = 1;
    int i = 10 + c * 4;
    while (++i < 20) {
    }
    return i;
}

int main() {
    int result1 = a1();
    int result2 = a2();
    int result3 = a3();

    printf("Result of a1: %d\n", result1);
    printf("Result of a2: %d\n", result2);
    printf("Result of a3: %d\n", result3);

    return 0;
}
