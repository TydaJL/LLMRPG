
#include <stdio.h>

int a() {
    double c = 4; 
    c = c * 3 + 7;
    int result = (int)(c + 5) % 2 * 4;
    return result;
}

int main() {
    int result = a();
    printf("Result from function a: %d\n", result);
    return 0;
}
