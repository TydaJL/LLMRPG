
#include <stdio.h>

int a() {
    char b[] = " a ";
    return b[2];
}

void print() {
    char b[] = "print";
    for (int i = 0; i < 5; i++) {
        putchar(b[i]);
    }
    putchar('\n');
}

int main() {
    int value = a();
    printf("Value from a: %c\n", value);
    print();
    return 0;
}
