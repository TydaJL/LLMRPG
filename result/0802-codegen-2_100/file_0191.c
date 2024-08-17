
#include <stdio.h>

int a() {
    return 5 + 5 * 2;
}

int c() {
    return a() + 2;
}

int main() {
    printf("The value of the variable c is %d\n", c());
    return 0;
}
