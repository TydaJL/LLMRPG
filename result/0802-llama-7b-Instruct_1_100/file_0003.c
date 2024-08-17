
#include <stdio.h>

int a() {
    int b = 3;
    int i = 7 ^ (1 >> (a() / 4 ^ b) ^ (~2));
    return i;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
