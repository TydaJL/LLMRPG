
#include <stdio.h>

int a() {
    return 2;
}

int main() {
    int b[5];
    int c = 2;
    b[0] = 3; 
    c += 7 * 1 - 6;
    b[4] = a();
    printf("%d\n", c);
    return 0;
}
