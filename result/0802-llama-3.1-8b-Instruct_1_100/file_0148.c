
#include <stdio.h>

#define PI 3.14159

int a() {
    int result = 0;
    result = (int)(PI * 2);
    return result;
}

int main() {
    int value = a();
    printf("Result: %d\n", value);
    return 0;
}
