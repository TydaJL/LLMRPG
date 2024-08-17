
#include <stdio.h>

int a() {
    int b = 1;
    int n = 2;
    printf("%d\n", (n - 1) * b);
    return n + 2 - 4 < 5;   
}

int main() {
    a();
    return 0;
}
