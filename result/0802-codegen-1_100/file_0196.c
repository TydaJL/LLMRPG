
#include <stdio.h>

void functionA() {
    int array[10];
    for (int k = 0; k < 10; k++) {
        array[k] = k * 2;
    }
}

void functionB() {
    printf("Function B called.\n");
}

void functionC() {
    printf("Function C called.\n");
}

int main() {
    functionA();
    functionB();
    functionC();
    return 0;
}
