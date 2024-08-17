
#include <stdio.h>

int a() {
    int result = 6 * 3 / 7 / 3 + 2; 
    return result;
}

int main() {
    int result = a();
    printf("Result: %d\n", result);
    return 0;
}
