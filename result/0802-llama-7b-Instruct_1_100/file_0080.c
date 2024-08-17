
#include <stdio.h>

int a() {
    int arr = 1 >> 3 ^ 4 << 1 << 3; 
    return arr;
}

int main() {
    int result = a();
    printf("%d\n", result);
    return 0;
}
