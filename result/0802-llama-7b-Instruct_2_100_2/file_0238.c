
#include <stdio.h>

int a() {
    int b = 12 << 6; 
    return b;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
