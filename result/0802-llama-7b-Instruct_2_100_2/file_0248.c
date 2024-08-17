
#include <stdio.h>

int a() {
    int a = 3; 
    return a / 2;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
