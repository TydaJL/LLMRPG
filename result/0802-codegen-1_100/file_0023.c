
#include <stdio.h>

int x = 0, y = 0, a = 0, b = 0;

int b_function() {
    return b + 1;
}

void c(int value) {
    printf("c called with value: %d\n", value);
}

int a_function() {
    c(2 * b_function());
    return a + b * ++x;
}

int main() {
    a_function();
    return 0;
}
