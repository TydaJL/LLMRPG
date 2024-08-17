
#include <stdio.h>

int a() {
    int result = 42;
    return result;
}

int main() {
    int value = a();
    printf("%d\n", value);
    return 0;
}
