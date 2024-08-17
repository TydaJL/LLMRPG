
#include <stdio.h>

int a() {
    return 10;  
}

int b(int i) {
    return i;   
}

int main() {
    int x = 10;
    int result = a() + b(x);
    printf("Result: %d\n", result);
    return 0;   
}
