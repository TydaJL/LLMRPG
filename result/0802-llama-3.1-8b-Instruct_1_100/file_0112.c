
#include <stdio.h>

int a() {
    return sizeof(int) - 1;
}

int main() {
    int result = a();
    printf("Result from a(): %d\n", result);
    return 0;
}
