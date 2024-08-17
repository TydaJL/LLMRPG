
#include <stdio.h>

int a() {
    int result = 1 & !0; 
    result = result - 1 + result * 2 / 3;
    printf("%d\n", result);
    return result;
}

int main() {
    a();
    return 0;
}
