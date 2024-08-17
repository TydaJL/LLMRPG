
#include <stdio.h>

int a() {
    int x = 5;
    return !x;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
