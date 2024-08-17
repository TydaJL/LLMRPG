
#include <stdio.h>

int a() {
    int value = 0;
    value = (value + !(value + value)) % (value + 1);
    return value;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
