
#include <stdio.h>

int functionA() {
    return 1;
}

int functionB(int x) {
    return x + 2;
}

int functionC(int x, int y) {
    return x * y;
}

int functionD() {
    return 3;
}

int functionE(int x) {
    return x - 1;
}

int functionF(int x, int y) {
    if (y != 0) {
        return x / y;
    } else {
        printf("Error: Division by zero\n");
        return 0;
    }
}

int functionG(int x, int y, int z) {
    return x + y + z;
}

int functionH() {
    return 0;
}

int functionI(int x) {
    return x * x;
}

int functionJ(int x) {
    return x % 2;
}

int main() {
    printf("%d\n", functionA());
    printf("%d\n", functionB(5));
    printf("%d\n", functionC(3, 4));
    printf("%d\n", functionD());
    printf("%d\n", functionE(10));
    printf("%d\n", functionF(10, 2));
    printf("%d\n", functionG(1, 2, 3));
    printf("%d\n", functionH());
    printf("%d\n", functionI(5));
    printf("%d\n", functionJ(7));
    return 0;
}
