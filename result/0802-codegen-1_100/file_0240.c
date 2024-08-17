
#include <stdio.h>

int a() {
    return 0;
}

int b = 1;

int i, j, k;

void printValues() {
    printf("Values: %d, %d, %d\n", i, j, k);
}

int main() {
    a();
    i = 1;
    j = 2;
    k = 3;
    printValues();
    return 0;
}
