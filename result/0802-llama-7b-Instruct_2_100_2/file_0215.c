
#include <stdio.h>

int a_function() {
    return 1;
}

int b_function() {
    return 2;
}

int c_function(int a) {
    return a + a - a + a / (a ? a : 1) + a;
}

int main() {
    int x = a_function();
    int y = b_function();
    int z = c_function(x);
    printf("%d %d %d\n", x, y, z);
    return 0;
}
