
#include <stdio.h>

int z() {
    return 0;
}

int a() {
    return (int)(z() & ~(int)2 | 3);
}

int main() {
    int result_a = a();
    int result_z = z();
    printf("Result of a(): %d\n", result_a);
    printf("Result of z(): %d\n", result_z);
    return 0;
}
