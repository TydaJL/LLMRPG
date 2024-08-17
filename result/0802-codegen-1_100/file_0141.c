
#include <stdio.h>

int a() {
    static int s = 1;
    s += 5;
    return s - (a() * 2);
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
